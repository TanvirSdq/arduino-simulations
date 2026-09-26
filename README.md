# Arduino Simulations

Arduino sketches and virtual circuit simulations using [Wokwi](https://wokwi.com) for VS Code.

## Projects

### 1. Servo Motor Sweep (`servo/`)
- **Controller:** Arduino Uno
- **Actuator:** SG90 / MG995 Servo Motor (PWM Pin 9)
- **Behavior:** Smooth bidirectional angular sweep between 0° and 180°.

### 2. Ultrasonic Proximity Alarm (`motor/`)
- **Controller:** Arduino Uno
- **Sensors & Actuators:** HC-SR04 Ultrasonic Distance Sensor (Trig Pin 9, Echo Pin 10), Piezo Buzzer (Pin 11)
- **Behavior:** Measures object distance via ultrasonic time-of-flight. Triggers buzzer alarm when obstacle distance is under 15 cm.

## Simulation Setup (Wokwi in VS Code)

1. Install the **Wokwi Simulator** extension in VS Code.
2. Build firmware and setup diagrams:
   - **Servo:** Run VS Code task `Build Servo for Wokwi` (`Cmd + Shift + B`).
   - **Ultrasonic & Buzzer:** Run task `Build Motor (Ultrasonic + Buzzer) for Wokwi`.
3. Press `F1` $\rightarrow$ `Wokwi: Start Simulator`.
