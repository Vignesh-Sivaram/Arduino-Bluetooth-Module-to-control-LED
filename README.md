# IoT Project using Arduino and Bluetooth Module to Control LED through Android app

### **Objective and Scope of Project**

This project focuses on developing a system that allows the control of an LED using an Android app via Bluetooth.

The system consists of an Arduino board integrated with an HC-05 Bluetooth module and an LED. Using a custom Android application, the user can manipulate the LED's state (On/Off).

### **Requirements**

#### Hardware Components:
1.	Arduino UNO board
2.	USB cable for connecter Arduino UNO
3.	Bluetooth Module HC-05
4.	Jumper wires male to male
5.	LED
6.	Bread Board
7.	AC 220v/120v home appliances or 9v Hi-Walt Battery

#### Software requirements:
1.	Arduino Software (IDE) on desktop/laptop
2.	‘Arduino Bluetooth Controller’ Android app from Play Store

* ### Connection to Arduino Board:

![Digital circuit diagram](https://github.com/user-attachments/assets/db879a76-1d7f-42a7-baad-c137b5798516)


* ### After compiling and uploading code to Arduino board:

![{68DF88B9-F700-478F-BF7F-54084C56535B}](https://github.com/user-attachments/assets/78273ca9-1e38-41aa-a9df-0ab99048b0aa)


* According to circuit diagram, connections are given from Arduino board to HC-05 Bluetooth chip and LED bulb, to various pins with the help of jumper wires and breadboard:

![image](https://github.com/user-attachments/assets/02b04f56-195f-43ab-b1d1-8689527bd77a)

## Lighting up LED through Arduino IDE

### Approach 1: Via Serial monitor

Serial monitor icon🔎 on top-right corner of Arduino IDE screen is clicked and 1/0 input message is send indicating On/Off for bulb:

![{1298DE4F-2162-4A9A-917A-2C31CEE67C07}](https://github.com/user-attachments/assets/7c885f24-2639-4f06-9ed3-86f6d8f56cbc)

### Approach 2: Via Bluetooth controller App from Play Store in Android

With Arduino board powered by USB cable, HC-05 Bluetooth module starts blinking, which indicates that it is searching for nearby devices.

After installing Arduino Bluetooth Controller from Play Store, open the app and search for the HC-05 device from list of available devices. Pair phone with the Bluetooth device.

![image](https://github.com/user-attachments/assets/98281dbe-0151-4a32-8585-cbd81eb6ff94)          ![image](https://github.com/user-attachments/assets/4e1fa439-e6c0-4311-8d2a-40ea7ff865e5)

After pairing, select Switch mode and configure ON/OFF values to 1 and 0 respectively.

The toggle button appearing on mobile screen acts as switch for the LED.

### Output - LED illumination snap

![image](https://github.com/user-attachments/assets/76f7bb3b-836a-43a1-80df-853482a3e8e3)

## Conclusion:

This project hence shows LED lighting responsiveness.

Its ease of use make it a practical solution for home automation and remote-control systems.









