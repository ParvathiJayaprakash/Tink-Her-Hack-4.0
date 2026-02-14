<p align="center">
  <img src="./img.png" alt="Project Banner" width="100%">
</p>

# [SMART SAFETY HELMET ] 🎯

## Basic Details

### Team Name: [BIT BENDERS]

### Team Members
- Member 1: [PARVATHI JAYAPRAKASH] - [COLLEGE OF ENGINEERING AND MANAGEMENT PUNNAPRA]
- Member 2: [KRISHNENDHU V] - [COLLEGE OF ENGINEERING AND MANAGEMENT PUNNAPRA]

### Project Description
[The Smart Helmet System is an embedded safety solution designed to enhance rider protection by continuously monitoring the rider’s physical condition and helmet usage. The system integrates multiple sensors to detect drowsiness, helmet strap lock status, and alcohol consumption, and takes preventive actions to reduce the risk of road accidents.]

### The Problem statement
[Road accidents involving two-wheelers are a major safety concern, especially in developing countries. A significant number of these accidents occur due to rider drowsiness, drunken riding, and improper helmet usage, such as riding without fastening the helmet strap. Although wearing a helmet is legally mandated, there is no mechanism to ensure that it is worn correctly or that the rider is in a safe physical condition to operate the vehicle.
Current safety systems largely depend on manual enforcement and rider responsibility, which often fail due to negligence or lack of awareness. There is a need for an automated, real-time safety system that can continuously monitor the rider’s condition and helmet usage, provide immediate alerts, and prevent vehicle operation under unsafe conditions.]

### The Solution
[ 1. Drowsiness Detection
An IR eye-blink sensor is used to monitor the rider’s eye movement. If the rider’s eyes remain closed for a predefined duration, the system identifies this as a sign of drowsiness. In such cases, a buzzer alert is activated to warn the rider and help regain alertness, thereby preventing accidents caused by fatigue.
2. Strap Wear (Lock) Detection
A dedicated IR sensor is placed near the helmet strap to detect whether the strap is properly locked. If the strap is not fastened, the system recognizes unsafe helmet usage. A status LED provides visual feedback, and the system can restrict engine operation until the strap is securely locked, ensuring that the helmet is worn correctly.
3. Alcohol Detection
An MQ alcohol sensor continuously analyzes the rider’s breath for the presence of alcohol. When alcohol concentration exceeds a predefined safe threshold, the system immediately identifies intoxication. Under this condition, the engine remains OFF, and a warning is displayed on the LCD, preventing the rider from operating the vehicle while drunk.
4. LCD Display & Alerts
A 16×2 LCD display provides real-time system feedback such as ENGINE ON, ENGINE OFF, strap status, and alcohol detection messages. The buzzer generates alerts during critical conditions like drowsiness or alcohol detection, ensuring timely warnings.]


---

## Technical Details

### Components Used

  - Main components:[ARDUINO UNO,IR SENSORS,MQ3 ALCOHOL DETECTION SENSOR]

- Tools required: [JUMPER WIRES,BREADBOARD,I2CLCD DISPLAY,BUZZER,LED]

---

## Features

List the key features of your project:
- Feature 1: [Wear Detection
For wear detection, we are using data from an IR obstacle sensor placed near the MQ3 sensor at the cheek area. So, while wearing it, it is possible to determine whether the helmet is worn or not.]
- Feature 2: [Sleep Detection
For this test, we asked the person to avoid blinking, which results in no triggers. But if the blinking time is slow or the eyes remain closed, the trigger starts. The user will then hear the buzzer turn ON along with the warning light, and the status will be displayed on the screen.]
- Feature 3: [Alcohol detection
For this alcohol detection we use MQ 3 gas sensor where it sense the amount of alcohol conatined when the threshold value exceed the value will be displayed]
- Feature 4: [Strap detection
what we do for conforming the passenger is wearing the helmet is placeing a IRSensor and if the strap is put on the LED will be OFF else it will ON state .]

---

## Implementation

#### Components Required
[ARDUINO UNO,IR SENSORS,MQ3 ALCOHOL DETECTION SENSOR,JUMPER WIRES,BREADBOARD,I2CLCD DISPLAY,BUZZER,LED]

#### Circuit Setup
[An IR eye blink sensor detects rider drowsiness by monitoring eye closure and activates a buzzer alert when fatigue is detected. An IR sensor placed near the helmet strap ensures that the strap is properly locked before allowing safe operation. An MQ alcohol sensor detects alcohol in the rider’s breath and prevents engine operation if the alcohol level exceeds the safe limit.
A 16×2 LCD display provides real-time information such as engine status and warning messages. The engine is enabled only when all safety conditions are satisfied. By integrating multiple sensors with automated control, the Smart Helmet System enhances rider safety and reduces accident risks.]

---

## Project Documentation

#### Schematic & Circuit

![https://drive.google.com/file/d/1VMNFliznpo7dfheqtd6EFqoYmDqSb8As/view?usp=drivesdk](Add your circuit diagram here)
*Add caption explaining connections*


#### Build Photos

![https://drive.google.com/file/d/1FX4yP2ZJQ-G7CvcOwybjL-D3qTAwUxyQ/view?usp=drivesdk](Add photo of your team her)

![https://drive.google.com/file/d/1hR4SdJYmMhEccmWtEf7SQy3FsZAr7PBg/view?usp=drivesdk](Add photo of your components here)
*List out all components shown*

![https://drive.google.com/file/d/1iiF9qNMmd1XOTaVMqLQVBzf7_Kp1Mjvk/view?usp=drivesdk](Add photos of build process here)
*Explain the build steps*

![https://drive.google.com/file/d/1iiF9qNMmd1XOTaVMqLQVBzf7_Kp1Mjvk/view?usp=drivesdk](Add photo of final product here)
*Explain the final build*

---

#### Bill of Materials (BOM)

| Component | Quantity | Specifications | MAKERSPACE CEMP|
|-----------|----------|----------------|-------|-------------|
| Arduino Uno | 1 | ATmega328P, 16MHz | ₹450 | [Link] |
| LED | 5 | Red, 5mm, 20mA | ₹5 each | [Link] |
| Resistor | 5 | 220Ω, 1/4W | ₹1 each | [Link] |
| Breadboard | 1 | 830 points | ₹100 | [Link] |
| Jumper Wires | 20 | Male-to-Male | ₹50 | [Link] |
| [Add more...] | | | | |

**Total Estimated Cost:** ₹[Amount]

#### Assembly Instructions

**Step 1: Prepare Components**
1. Gather all components listed in the BOM
2. Check component specifications
3. Prepare your workspace
![https://drive.google.com/file/d/11k0u_YRbijxcPuZWfQRUrph8z8zp6J8E/view?usp=drivesdk](images/assembly-step1.jpg)
*Caption: All components laid out*

**Step 2: Build the Power Supply**
1. Connect the power rails on the breadboard
2. Connect Arduino 5V to breadboard positive rail
3. Connect Arduino GND to breadboard negative rail
![https://drive.google.com/file/d/1Hi5LVxXs4OSqWMH6bv0_P46V3VdEGcbx/view?usp=drivesdk](images/assembly-step2.jpg)
*Caption: Power connections completed*

**Step 3: Add Components**
1. Place LEDs on breadboard
2. Connect resistors in series with LEDs
3. Connect LED cathodes to GND
4. Connect LED anodes to Arduino digital pins (2-6)
![Step 3](images/assembly-step3.jpg)
*Caption: LED circuit assembled*

**Step 4: [Continue for all steps...]**

**Final Assembly:**
![https://drive.google.com/file/d/1oVwylh_ZJ_lS643X009hg5xZ9pa6Y1Ac/view?usp=drivesdk](images/final-build.jpg)
*Caption: Completed project ready for testing*

---

## Project Demo

### Video
[https://drive.google.com/file/d/1LqGgsb1xSZF3-159hz4KcnkO8phf3aGP/view?usp=drivesdk]

*Explain what the video demonstrates - key features, user flow, technical highlights*

### Additional Demos
[Add any extra demo materials/links - Live site, APK download, online demo, etc.]

---

## Team Contributions

- [PARVATHI JAYAPRAKASH]: [SETUPING THE CIRCUIT ONE BY ONE]
- [KRISHNENDHU V]: [CODE FOR THE PROJECT]

---

## License

This project is licensed under the [MIT] License - see the [LICENSE](LICENSE) file for details.

---

Made with ❤️ at TinkerHub
