#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte sekund[8] = {
  0b00000,
  0b00100,
  0b00100,
  0b00000,
  0b00000,
  0b00100,
  0b00100,
  0b00000
};
byte off[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};


void setup() {
  lcd.begin(16, 2);
  lcd.createChar(2, sekund);
  lcd.createChar(1, off);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}
void loop() {
  int soat = 0, minut = 00;
  int curs1 = 4, curs2 = 8;
  for (int k = 0; k < 24; k++) {
    if (curs1 != 3 && soat > 9) curs1 = 3;
    lcd.setCursor(1, curs1);
    lcd.print(soat);
    for (int j = 0; j < 60; j++) {
      if (curs1 != 7 && minut > 9) curs2 = 7;
      lcd.setCursor(1, 8);
      lcd.print(minut);
      for (int i = 0; i < 60; i++) {
        //lcd.setCursor(1, 6);
        lcd.write(2);
        delay(100);
        //lcd.setCursor(1, 6);
        lcd.write(1);
        delay(900);
      }
      minut++;
    }
    soat++;
  }

}

