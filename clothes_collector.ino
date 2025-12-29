#include <Servo.h>

Servo clothesServo;

const int rainPin = 2;     // Rain sensor digital output
const int servoPin = 9;

void setup() {
  pinMode(rainPin, INPUT);
  clothesServo.attach(servoPin);

  // Initial state: Clothes outside
  clothesServo.write(0);
  delay(1000);
}

void loop() {
  int rainState = digitalRead(rainPin);

  if (rainState == LOW) {
    // Rain detected
    clothesServo.write(150);  // Clothes INSIDE
  } else {
    // No rain
    clothesServo.write(0);    // Clothes OUTSIDE
  }

  delay(500);
}
