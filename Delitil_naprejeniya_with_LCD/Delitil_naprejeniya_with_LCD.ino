#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
double qiymat=(2.56/1024)*((82.2+3.21)/3.21);

void setup() {
analogReference(INTERNAL);
lcd.begin(16,2);
delay(5000);
lcd.begin(16,2);
pinMode(A5,INPUT);  
lcd.setCursor(0,0);
lcd.print("Voltmetr:");
}
void loop() {
double a=0; 
for(int i=0; i<500; i++){
 a+=analogRead(A5);
 delay(1);
}
if(a>0){
a=a/500;
a=a*qiymat;
}else a=0;
lcd.setCursor(9,0);
lcd.print(a);
delay(100);
}
