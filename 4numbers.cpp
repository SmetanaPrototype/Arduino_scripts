// 4-разрядный 7-сегментный индикатор — динамическая индикация
// Подставь свои пины после определения распиновки!

const int segPins[8] = {2, 3, 4, 5, 6, 7, 8, 9};   // a, b, c, d, e, f, g, dp
const int digPins[4] = {10, 11, 12, 13};           // разряды 1..4

const bool commonCathode = true;  // поменяй на false, если общий анод

// 1 = сегмент горит (для общего катода)
const byte digits[10][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1}, // 9
};

void setup() {
  for (int i = 0; i < 8; i++) pinMode(segPins[i], OUTPUT);
  for (int i = 0; i < 4; i++) pinMode(digPins[i], OUTPUT);
}

// Показать цифру num в позиции pos (0..3)
void showDigit(int pos, int num) {
  // выключить все разряды
  for (int i = 0; i < 4; i++)
    digitalWrite(digPins[i], commonCathode ? HIGH : LOW);

  // выставить сегменты
  for (int s = 0; s < 7; s++) {
    bool on = digits[num][s];
    digitalWrite(segPins[s], commonCathode ? on : !on);
  }

  // включить нужный разряд
  digitalWrite(digPins[pos], commonCathode ? LOW : HIGH);
}

void loop() {
  showDigit(0, 1); delay(5);
  showDigit(1, 2); delay(5);
  showDigit(2, 3); delay(5);
  showDigit(3, 4); delay(5);
}
