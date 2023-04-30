void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(12) == HIGH){
    tone(3,1700);
    delay(400);
    tone(3,1000);
    delay(800);
  } else {
    noTone(3);
  }
}
