int leds[] = {2, 3, 4, 5, 6};
int n = 5;

void setup() {
  for (int i = 0; i < n; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < n; i++) {
    digitalWrite(leds[i], 1);
    delay(200);
    digitalWrite(leds[i], 0);
  }

  for (int i = n-2; i > 0; i--) {
    digitalWrite(leds[i], 1);
    delay(200);
    digitalWrite(leds[i], 0);
  }
}
