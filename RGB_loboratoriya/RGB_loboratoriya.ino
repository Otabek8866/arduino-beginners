int red=9;
int green=10;
int blue=11;
int del=5;
void setup() {
 pinMode(red,INPUT);
 pinMode(green,INPUT);
 pinMode(blue,INPUT);
}

void loop() {
  analogWrite(red,255);
  analogWrite(blue,255);
  analogWrite(green,255);
  GoOn(red);
  GoBack(red);
  delay(del);
  GoOn(green);
  GoBack(green);
  delay(del);
  GoOn(blue);
  GoBack(blue);
  delay(del);
}
void GoOn(int a){
  for(int i=255; i>=0; i--){
    analogWrite(a,i);
    delay(del); 
    } 
  }
  void GoBack(int a){
    for(int i=0; i<=255; i++){
    analogWrite(a,i);
    delay(del);
   }
  }
