void setup() {
  pinMode(5, OUTPUT);   // Любой GPIO, например 5
}

void loop() {
  digitalWrite(5, HIGH);  // ВКЛ
  delay(1000);            // Ждём 1 сек
  digitalWrite(5, LOW);   // ВЫКЛ
  delay(1000);            // Ждём 1 сек
}
