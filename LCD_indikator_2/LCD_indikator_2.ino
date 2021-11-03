#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
char a[12] = {'H', 'E', 'L', 'L', 'O', ' ', 'W', 'O', 'R', 'L', 'D', ' '};
int m=0, soni=0;

void setup() {
  lcd.begin(16, 2);
}
void loop() {
  int k = 0;
  for (int i = 16; i >= 1; i--) {
    lcdprint(i);
    delay(700);
    lcd.clear();
    delay(1);
    if(i==1) { i=16; m++; } 
  }
}
void lcdprint(int c){
  lcd.setCursor(c, 0);
    for(int j = 0; j < 12; j++) {
      lcd.print(a[j]);
    }
    if(m)
  }
