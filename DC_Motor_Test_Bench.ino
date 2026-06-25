int ENA = 5;
int IN1 = 8;
int IN2 = 9;
int LIMIT_SWITCH = 2;

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  // Uses Arduino's internal pull-up resistor
  pinMode(LIMIT_SWITCH, INPUT_PULLUP);
}

void loop() {
  int switchState = digitalRead(LIMIT_SWITCH);

  // If limit switch is pressed, stop motor
  if (switchState == LOW) {
    analogWrite(ENA, 0);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
  } 
  // If switch is not pressed, run motor
  else {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(ENA, 180);
  }
}