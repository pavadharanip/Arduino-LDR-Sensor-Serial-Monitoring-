int ldrpin = A1;

void setup() {
  Serial.begin(9600);

}


void loop() {
  int lightVal = analogRead(ldrpin);
  Serial.print("Light Reading");
  Serial.println("lightval");
  delay(500);

}
