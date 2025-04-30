// MX-01 Quantum Gnosis Navigation Core
// Embedded firmware for lateral distortion grid-response
// Developed by: Alexander Shakhov

#include <Arduino.h>

#define LEFT_SENSOR_PIN A0
#define RIGHT_SENSOR_PIN A1
#define MOTOR_LEFT_PIN 5
#define MOTOR_RIGHT_PIN 6

void setup() {
  pinMode(LEFT_SENSOR_PIN, INPUT);
  pinMode(RIGHT_SENSOR_PIN, INPUT);
  pinMode(MOTOR_LEFT_PIN, OUTPUT);
  pinMode(MOTOR_RIGHT_PIN, OUTPUT);
  Serial.begin(115200);
  delay(500);
}

void loop() {
  int ΨL = analogRead(LEFT_SENSOR_PIN);
  int ΨR = analogRead(RIGHT_SENSOR_PIN);

  if (ΨL > 700 && ΨR < 700) {
    digitalWrite(MOTOR_LEFT_PIN, LOW);
    digitalWrite(MOTOR_RIGHT_PIN, HIGH);
  } else if (ΨR > 700 && ΨL < 700) {
    digitalWrite(MOTOR_LEFT_PIN, HIGH);
    digitalWrite(MOTOR_RIGHT_PIN, LOW);
  } else {
    digitalWrite(MOTOR_LEFT_PIN, HIGH);
    digitalWrite(MOTOR_RIGHT_PIN, HIGH);
  }

  delay(150);
}
