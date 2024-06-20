/*
    Project name : ESP8266 H-Bridge Module
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-h-bridge-module
*/

// Define pins connected to the H-Bridge module
const int motorPin1 = D1; // GPIO pin for motor control 1 (IN1)
const int motorPin2 = D2; // GPIO pin for motor control 2 (IN2)

void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);

  // Initially, stop the motor
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
}

void loop() {
  // Rotate motor forward for 2 seconds
  motorForward();
  delay(2000);

  // Rotate motor backward for 2 seconds
  motorBackward();
  delay(2000);
}

void motorForward() {
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
}

void motorBackward() {
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
}
