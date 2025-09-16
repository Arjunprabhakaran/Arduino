// Motor pins
int motorA = 8;   // IN1
int motorB = 9;   // IN2
int enablePin = 10; // ENA (must be PWM pin if speed control needed)

void setup() {
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);
  pinMode(enablePin, OUTPUT);

  // Enable motor at full speed
  analogWrite(enablePin, 255); // 255 = full speed
}

void loop() {
  // Rotate CW
  digitalWrite(motorA, LOW);
  digitalWrite(motorB, HIGH);
  delay(2000);

  // Stop
  digitalWrite(motorA, LOW);
  digitalWrite(motorB, LOW);
  delay(1000);

  // Rotate CCW
  digitalWrite(motorA, HIGH);
  digitalWrite(motorB, LOW);
  delay(2000);

  // Stop
  digitalWrite(motorA, LOW);
  digitalWrite(motorB, LOW);
  delay(1000);
}
