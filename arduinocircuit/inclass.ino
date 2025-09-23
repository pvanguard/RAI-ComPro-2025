// C++ code

void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  pinMode(A0, INPUT);
  Serial.begin(9600);
}

int a = 0;
float A;

void loop() {
  a = analogRead(A0);
  A = a/1024.0;
  Serial.print("10 bits Val : ");
  Serial.print(a);
  Serial.print(" Real Val : ");
  Serial.print(A);
  Serial.println("V");
  Serial.println("");
  if(a>=850){
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  } else if(a>=600){
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  } else if(a>=400){
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  } else if(a>=100){
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
}