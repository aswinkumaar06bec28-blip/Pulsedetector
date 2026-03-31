# Pulsedetector
A simple, open-source heart rate monitor built with an Arduino Uno and an optical pulse sensor to measure and display real-time BPM (Beats Per Minute).
A simple, effective heartbeat monitoring system built with an Arduino Uno and an optical Pulse Sensor. This project detects a user's pulse in real-time and provides visual feedback.

This repository includes everything needed to build and understand the project: circuit schematics, source code, and a detailed technical report template.

Table of Contents
Overview

Features

Hardware Required

Circuit Diagram

Software & Installation

How It Works

Future Enhancements

License

Overview
The Arduino Pulse Detector uses the principle of Photoplethysmography (PPG) to measure heart rate. By shining a green light into the skin and measuring the reflected light, the sensor detects volume changes in the blood capillaries with each heartbeat. The Arduino processes this analog signal to determine the Beats Per Minute (BPM).

This project is suitable for beginners and can be extended with displays or wireless communication modules.

Features
Real-time Detection: Immediate feedback upon pulse detection.

Visual Feedback: Uses the Arduino's onboard LED (Pin 13) to blink in sync with each detected heartbeat.

Serial Monitoring: Displays raw sensor data or beat messages on the Arduino IDE Serial Monitor.

Adjustable Threshold: The software includes a customizable threshold variable to fine-tune sensitivity based on individual use.

Hardware Required
Arduino Uno (or compatible board like Nano)

Plug-and-play Pulse Sensor (Amplify type, 3-pin)

LED (External, optional - Pin 13 is used by default)

Buzzer (Optional, for audible feedback)

Jumper Wires (M/M or M/F as needed)

Breadboard

Circuit Diagram
The circuit connection is straightforward, involving just three wires to connect the sensor. Refer to the image below for the complete wiring schematic.

Wiring Details:
Pulse Sensor Pin	Arduino Pin	Wire Color (Typically)	Description
S (Signal)	A0	Orange/Purple	Analog Output Signal
+ (VCC)	5V	Red	Power Supply
- (GND)	GND	Black	Ground
Note: For visual feedback, an LED is connected to digital Pin 13 (or the onboard LED is used).

Software & Installation
This project uses standard Arduino sketch format. No external libraries are strictly required for the basic functionality.

Steps:
Install Arduino IDE: If you haven't already, download and install the Arduino IDE.

Clone the Repository:

Bash
git clone https://github.com/YourUsername/Pulse-Detector-Arduino.git
Open the Sketch: Navigate to the src/ folder and open PulseDetector.ino in the Arduino IDE.

Connect Your Arduino: Connect your Arduino board to your computer via USB.

Configure IDE:

Go to Tools > Board and select Arduino Uno.

Go to Tools > Port and select the corresponding COM port.

Upload: Click the Upload button.

Viewing Output:
Open the Serial Monitor (Ctrl + Shift + M) in the Arduino IDE, set to 9600 baud rate. You will see messages when a beat is detected.

(Optional) Open the Serial Plotter (Ctrl + Shift + L) to visualize the fluctuating analog data from the sensor.

How It Works
The optical sensor’s LED shines green light into the fingertip/earlobe.

Capillaries expand and contract with each pulse, affecting the amount of green light reflected.

The photosensor measures the reflected light intensity and outputs a varying analog voltage.

The Arduino reads this voltage at analog pin A0.

The code compares the analog value against a predefined THRESHOLD. If the value exceeds the threshold, a heartbeat is registered.

Future Enhancements
Potential improvements for this project include:

Integrating a 16x2 I2C LCD or 0.96" OLED display to visualize real-time BPM and pulse waveforms.

Adding an Interrupt-driven timing algorithm for precise calculation of intervals between beats (IBI) and stable BPM calculation.

Implementing wireless data transmission using a Bluetooth module (HC-05) to view pulse data on a mobile device.

License
This project is licensed under the MIT License - see the LICENSE file for details.
