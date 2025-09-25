const int RED_LED_PIN = 2;
const int YELLOW_LED_PIN = 3;
const int GREEN_LED_PIN = 4;
const int BUTTON_PIN = 7;

const long GREEN_DURATION = 5000;
const long YELLOW_DURATION = 2000;
const long RED_DURATION = 5000;

void setup() {
  Serial.begin(9600);
  Serial.println("Traffic Light");

  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  digitalWrite(RED_LED_PIN, HIGH);
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, LOW);
  Serial.println("Red Light ON for 5 seconds...");
}

void loop() {
  digitalWrite(GREEN_LED_PIN, HIGH);
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(RED_LED_PIN, LOW);
  Serial.println("Green Light ON for 5 seconds...");

  long greenStartTime = millis();
  bool buttonWasPressed = false;

  while (millis() - greenStartTime < GREEN_DURATION) {
    if (digitalRead(BUTTON_PIN) == LOW) {
      Serial.println("button pressed Shortening green light.");
      buttonWasPressed = true;
      break; 
    }
  }

  digitalWrite(GREEN_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, HIGH);
  digitalWrite(RED_LED_PIN, LOW);
  Serial.println("Yellow Light ON for 2 seconds...");
  delay(YELLOW_DURATION);

  digitalWrite(GREEN_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(RED_LED_PIN, HIGH);
  Serial.println("Red Light ON for 5 seconds...");
  delay(RED_DURATION);
}

