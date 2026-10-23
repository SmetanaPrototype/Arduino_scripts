void setup() {
  pinMode(13, OUTPUT);   // пин 13 как выход
}

void loop() {
  digitalWrite(13, HIGH);  // включить светодиод
  delay(1000);             // ждать 1 секунду
  digitalWrite(13, LOW);   // выключить светодиод
  delay(1000);             // ждать 1 секунду
}
