#include <LiquidCrystal.h>

// Пины Arduino: RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);       // 16 столбцов, 2 строки
  lcd.setCursor(0, 0);    // Курсор в начало первой строки
  lcd.print("1234");      // Выводим цифры
}

void loop() {
  // Здесь можно менять число, например: lcd.print(millis()/1000);
}
