void setup(){
  pinMode(8, INPUT);
  pinMode(6, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop(){
  if (digitalRead(8) == LOW) {
    digitalWrite(6, HIGH);
    digitalWrite(12, LOW);
  } else {
    digitalWrite(6, LOW);
    digitalWrite(12, HIGH);
  }
}