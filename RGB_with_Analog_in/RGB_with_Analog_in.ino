int del=100;
int red1=A0;
int green1=A1;
int blue1=A2;
int red2=A3;
int green2=A4;
int blue2=A5;

void setup() {
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
pinMode(A5,INPUT);
}

void loop() {
  //analogWrite(red1,255);
  //analogWrite(blue1,255);
  //analogWrite(green1,255);
  //analogWrite(red2,255);
  //analogWrite(blue2,255);
  //analogWrite(green2,255);
  GoOn(red1,green2);
  GoBack(red1,green2);
  //delay(del);
  GoOn(green1,blue2);
  GoBack(green1,blue2);
  //delay(del);
  GoOn(blue1,red2);
  GoBack(blue1, red2);
 // delay(del);
}
void GoOn(int a, int b){
  for(int i=255; i>=0; i--){
    analogWrite(a,i);
    analogWrite(b,i); 
    } delay(del);
  }
  void GoBack(int a, int b){
    for(int i=0; i<=255; i++){
    analogWrite(a,i);
    analogWrite(b,i);
   }delay(del);
  }
