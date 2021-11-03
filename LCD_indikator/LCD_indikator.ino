#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
char a[12] = {'H', 'E', 'L', 'L', 'O', ' ', 'W', 'O', 'R', 'L', 'D', ' '};
void setup() {
  lcd.begin(16, 2);
}
void loop() {
  
  for (int i = 16; i >= -11; i--) {
    lcd_print(i);
    delay(700);
    lcd.clear();
    delay(6);
    if(i==-11) i=16;
  }
}
void lcd_print(int k) {
  int j=0, h=k, m=0;
  if(k<0){ j=-1*k; k=0; }  
  lcd.setCursor(k,0);
for(int i=j; i<12; i++){
  lcd.print(a[i]); m++;
  }
  if(h<4){
  lcd.setCursor(m+1,0);
  for(int i=j; i<12; i++){
  lcd.print(a[i]);
  }}
}
