int ENA = 5;
int IN1 = 8;
int IN2 = 9;

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void loop() {
  // Forward direction
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  // 40% speed
  analogWrite(ENA, 102);
  delay(3000);

  // 60% speed
  analogWrite(ENA, 153);
  delay(3000);

  // 80% speed
  analogWrite(ENA, 204);
  delay(3000);

  // 100% speed
  analogWrite(ENA, 255);
  delay(3000);

  // Stop
  analogWrite(ENA, 0);
  delay(2000);
}