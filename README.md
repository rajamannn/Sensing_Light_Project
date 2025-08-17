# IR Sensor Controlled Relay Project 🔴⚡

This project uses an IR sensor to control a relay, allowing a device (like a light) to be toggled ON and OFF when an object is detected. The relay used is **active LOW**, so it switches when triggered by the sensor.

## Components 🛠️
- Arduino UNO 
- IR Sensor 
- Relay Module 
- Jumper Wires 
- Breadboard 

## Features 🌟
- Detects object presence using an IR sensor
- Toggles the relay (and connected device) ON/OFF
- Serial monitor displays current state: "ON" or "OFF"
- Simple and easy-to-understand logic for beginners

## How It Works ▶️
1. IR sensor detects an object (falling edge of sensor output).  
2. The Arduino toggles the relay state:
   - Relay ON → Connected device turns ON  
   - Relay OFF → Connected device turns OFF  
3. Current state is printed on the Serial Monitor.  
4. A small delay (300 ms) prevents false triggers from bouncing.

## Project Image 🖼️
An image of the circuit/setup has been attached in this repository.

## Notes 📝
- The relay is **active LOW**, so `LOW` turns it ON and `HIGH` turns it OFF.  
- For multiple triggers, ensure the object fully moves away from the IR sensor before the next detection.
