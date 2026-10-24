/*
  Потенциометры на A0 и A1. Вывод в порт.
  Открой Инструменты/Плоттер для просмотра графика
*/

void setup() {
  // открываем порт для связи
  Serial.begin(9600);
}

void loop() {
  // выводим оба значения
  // через запятую в одну строку
  Serial.print(analogRead(A0));
  Serial.print(',');
  Serial.println(analogRead(A1));
  delay(10);
}
