void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,INPUT_PULLUP);
  digitalWrite(2,LOW);
}

void loop() {
  if(!digitalRead(3)){
    digitalWrite(2,HIGH);
  }
  else {
    digitalWrite(2,LOW);
  }
}
