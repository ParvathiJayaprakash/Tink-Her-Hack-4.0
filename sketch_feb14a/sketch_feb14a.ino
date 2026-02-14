#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// --------------------
// LCD Setup
// --------------------
LiquidCrystal_I2C lcd(0x27, 16, 2);

// --------------------
// Pin Definitions
// --------------------
const int drowsyIRPin = 3;
const int strapIRPin  = 4;
const int alcoholSensorPin = A0;

const int buzzerPin = 7;
const int lockLedPin = 8;

// --------------------
// Variables
// --------------------
unsigned long eyeClosedStart = 0;
bool isDrowsy = false;

bool strapWorn = false;
bool alcoholDetected = false;

int alcoholThreshold = 600;

// Buzzer timing
unsigned long buzzerTimer = 0;
bool buzzerState = false;

// --------------------
// SETUP
// --------------------
void setup() {
  pinMode(drowsyIRPin, INPUT);
  pinMode(strapIRPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(lockLedPin, OUTPUT);

  Serial.begin(9600);

  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Safety Helmet");
  lcd.setCursor(0, 1);
  lcd.print("Initializing");

  delay(20000);  // MQ sensor warm-up
  lcd.clear();
}

// --------------------
// BUZZER FUNCTION
// --------------------
void handleBuzzer(bool alert) {
  if (!alert) {
    noTone(buzzerPin);
    buzzerState = false;
    return;
  }

  if (millis() - buzzerTimer >= 400) {
    buzzerTimer = millis();
    buzzerState = !buzzerState;

    if (buzzerState)
      tone(buzzerPin, 2000);
    else
      noTone(buzzerPin);
  }
}

// --------------------
// LOOP
// --------------------
void loop() {

  int eyeState = digitalRead(drowsyIRPin);
  int strapState = digitalRead(strapIRPin);
  int alcoholValue = analogRead(alcoholSensorPin);

  // --------------------
  // STRAP DETECTION
  // --------------------
  strapWorn = (strapState == LOW);

  // Strap locked → LED OFF
  // Strap open   → LED ON
  digitalWrite(lockLedPin, strapWorn ? LOW : HIGH);

  // --------------------
  // ALCOHOL DETECTION
  // --------------------
  alcoholDetected = (alcoholValue > alcoholThreshold);

  // --------------------
  // DROWSINESS
  // --------------------
  if (eyeState == LOW) {
    if (eyeClosedStart == 0)
      eyeClosedStart = millis();

    if (millis() - eyeClosedStart >= 2000)
      isDrowsy = true;
  } else {
    eyeClosedStart = 0;
    isDrowsy = false;
  }

  // --------------------
  // LCD DISPLAY
  // --------------------
  lcd.setCursor(0, 0);

  if (!strapWorn || alcoholDetected) {
    lcd.print("ENGINE OFF     ");
    lcd.setCursor(0, 1);

    if (!strapWorn)
      lcd.print("Strap Not Lock ");
    else if (alcoholDetected)
      lcd.print("Alcohol Detect ");
  } 
  else {
    lcd.print("ENGINE ON      ");
    lcd.setCursor(0, 1);
    lcd.print("Ride Safe :)   ");
  }

  // --------------------
  // BUZZER
  // --------------------
  bool alertCondition = isDrowsy || alcoholDetected;
  handleBuzzer(alertCondition);

  // --------------------
  // SERIAL MONITOR
  // --------------------
  Serial.print("Strap: ");
  Serial.print(strapWorn);
  Serial.print(" | Alcohol: ");
  Serial.print(alcoholDetected);
  Serial.print(" | Drowsy: ");
  Serial.println(isDrowsy);

  delay(200);
}