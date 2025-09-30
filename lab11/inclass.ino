#define AENA 9
#define BENA 3
#define AIN1 8
#define AIN2 6
#define BIN1 5
#define BIN2 4


void setup() {
  pinMode(AENA, OUTPUT);
  pinMode(BENA, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  Serial.println("Moving Forward");
  moveMotorA(255, true);
  moveMotorB(255, true);
  delay(2000);

  Serial.println("Stopping");
  stopMotorA();
  stopMotorB();
  delay(1000);

  Serial.println("Moving Backward");
  moveMotorA(127, false);
  moveMotorB(127, false);
  delay(2000);

  Serial.println("Stopping");
  stopMotorA();
  stopMotorB();
  delay(1000);
}

void moveMotorA(int speed, bool forward) {
  if (forward) {
    digitalWrite(AIN1, HIGH);
    digitalWrite(AIN2, LOW);
  } else {
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, HIGH);
  }
  analogWrite(AENA, speed);
  analogWrite(BENA, speed);
}

void moveMotorB(int speed, bool forward) {
  if (forward) {
    digitalWrite(BIN1, HIGH);
    digitalWrite(BIN2, LOW);
  } else {
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, HIGH);
  }
  analogWrite(AENA, speed);
  analogWrite(BENA, speed);
}

void stopMotorA() {
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, LOW);
}

void stopMotorB() {
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, LOW);
}