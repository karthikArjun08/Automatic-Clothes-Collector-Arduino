🌧️ Automatic Clothes Collector Using Arduino

An Arduino-based automatic clothes protection system that detects rain and automatically pulls clothes inside using a servo motor.

🔍 Problem Statement

Unexpected rain can damage clothes dried outdoors. Manual monitoring is inefficient and unreliable.

💡 Solution

This project uses a rain sensor to detect rainfall and an Arduino UNO to control a servo motor, which moves the clothesline automatically.

⚙️ Working Principle

0° → Clothes OUTSIDE

150° → Clothes INSIDE

Rain detected → Servo rotates to 150°

Rain stops → Servo returns to 0°

🧰 Components Used

Arduino UNO

Rain Drop Sensor Module

Servo Motor (SG90)

Jumper Wires

Power Supply

Mechanical arm / stick

🔌 Connections
Component	Arduino Pin
Rain Sensor DO	D2
Servo Signal	D9
VCC	5V
GND	GND


🧠 Applications

Home automation

Smart clothes drying systems

IoT-based weather protection

Educational embedded projects

🚀 Future Enhancements

ESP32 + WiFi control

Mobile app notifications

Manual override switch

Weather API integration



👨‍💻 Author

Karthik Arjun
Embedded Systems & IoT Enthusiast
Arduino | ESP32 | Automation


