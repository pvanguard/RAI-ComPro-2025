int potPin = A0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = analogRead(A0);
  Serial.print("Potentiometer Value: ");
  Serial.println(sensorValue);
  delay(10); 
}