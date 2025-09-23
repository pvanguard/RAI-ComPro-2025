int ledPin = 9;
int potPin = A0;
int potValue = 0;
int brightness = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potValue = analogRead(potPin);
  brightness = map(potValue, 0, 1023, 0, 255);
  analogWrite(ledPin, brightness);
  delay(10);
}