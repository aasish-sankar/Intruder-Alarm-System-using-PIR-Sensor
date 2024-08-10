# Intruder Alarm System using PIR Sensor

This project demonstrates how to build an Intruder Alarm System using an HC-SR501 PIR sensor, Arduino Uno, a 5V relay, and a buzzer. The system detects motion using the PIR sensor and triggers the buzzer through the relay, providing a simple yet effective security solution.

## Components Used
- **Arduino Uno**
- **HC-SR501 PIR Sensor**
- **5V Relay Module**
- **Buzzer**
- **7-12V DC Battery**
- **Breadboard**
- **Jumper Wires**
- **Arduino IDE**


## Arduino Code
The Arduino code is located in the `Arduino/` directory. The file `intruder_alarm.ino` contains the code to run the intruder alarm system.

## Setup Instructions

1. **Hardware Connections:**
    - Connect the components as described in the circuit diagram.
    - Ensure that the PIR sensor is connected to digital pin 2, and the relay module is connected to digital pin 8.

2. **Upload the Code:**
    - Open the `intruder_alarm.ino` file in the Arduino IDE.
    - Connect your Arduino Uno to your computer and upload the code.

3. **Power Up:**
    - Power the Arduino Uno either through USB or an external power source.
    - The system will monitor for motion and activate the buzzer when detected.

## How It Works
- **PIR Sensor:** Detects motion in its field of view and sends a signal to the Arduino.
- **Arduino Uno:** Processes the signal and activates the relay to turn on the buzzer.
- **Relay Module:** Controls the buzzer, acting as a switch to allow or block current flow.
- **Buzzer:** Emits a sound when the relay is activated, providing an audible alarm.

## Conclusion
This intruder alarm system is a basic yet effective project for enhancing security in homes or offices. By detecting unauthorized motion and alerting the occupants, it serves as a deterrent against potential intrusions.
