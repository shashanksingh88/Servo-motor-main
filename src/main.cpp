#include <Arduino.h>
#include <Servo.h>
#define ServoPin 3
Servo myServo;
void setup() {
    myServo.attach(ServoPin);
    Serial.begin(9600);
}

void loop() {
    myServo.write(0);
    delay(500);
    myServo.write(90);
    delay(500);
    myServo.write(120);
    delay(500);
    myServo.write(180);
    delay(500);
}