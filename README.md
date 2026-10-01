# Arduino Simulations

Arduino sketches and virtual circuit simulations using [Wokwi](https://wokwi.com) for VS Code.

## Projects

### 1. Servo Motor Sweep (`servo/`)
- **Controller:** Arduino Uno
- **Hardware:** SG90 / MG995 Servo Motor (PWM Pin 9)
- **Behavior:** Smooth bidirectional angular sweep between 0° and 180°.

### 2. Ultrasonic Proximity Alarm (`motor/`)
- **Controller:** Arduino Uno
- **Hardware:** HC-SR04 Ultrasonic Distance Sensor (Trig Pin 9, Echo Pin 10), Piezo Buzzer (Pin 11)
- **Behavior:** Measures object distance via ultrasonic time-of-flight and activates buzzer when an obstacle is within 15 cm.

## Tech Stack

- **Firmware:** Arduino (C++)
- **Hardware Target:** Arduino Uno (ATmega328P)
- **Simulator:** Wokwi for VS Code

## Usage

### Prerequisites
- [VS Code](https://code.visualstudio.com/)
- [Wokwi Simulator](https://marketplace.visualstudio.com/items?itemName=Wokwi.wokwi-vscode) extension

### Running Simulations
1. Open the project in VS Code.
2. Build the firmware using VS Code tasks (`Cmd+Shift+B` or `Ctrl+Shift+B`):
   - **Servo:** `Build Servo for Wokwi`
   - **Ultrasonic Alarm:** `Build Motor (Ultrasonic + Buzzer) for Wokwi`
3. Open the Command Palette (`F1` or `Cmd+Shift+P`) and run `Wokwi: Start Simulator`.
