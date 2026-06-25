int ENA = 5;
int IN1 = 8;
int IN2 = 9;

int TRIG = 6;
int ECHO = 7;

long duration;
int distance;

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  Serial.begin(9600);
}

void loop() {
  // Trigger pulse
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH);
  distance = duration * 0.034 / 2;

  Serial.println(distance);

  // smoother control zone
  if (distance > 0 && distance < 12) {
    analogWrite(ENA, 0);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
  } 
  else if (distance >= 12 && distance < 18) {
    // dead zone = do nothing (prevents flicker)
  } 
  else {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(ENA, 180);
  }

  delay(60); // slower updates = less glitching
}