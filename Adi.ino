int buzz=9;

void setup() {
  pinMode(buzz,OUTPUT);

}
void loop() {
  digitalWrite(buzz,HIGH);
  delay (1000);
  digitalWrite(buzz,LOW);
  delay (1000);

}
