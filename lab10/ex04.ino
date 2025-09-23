int ledPin = 9;
int potPin = A0;
int potValue = 0;
int mid = 512; 

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);

  if (potValue > mid) {
    digitalWrite(ledPin, 1);
  } else {
    digitalWrite(ledPin, 0);
  }
}