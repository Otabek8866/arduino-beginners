int red=5;
int blue=6;
int green=9;
int del=30;
void setup() {
pinMode(red,INPUT);
pinMode(blue,INPUT);
pinMode(green,INPUT);
Serial.begin(9600);
}

void loop() {
 char Buffer[4];
 if(Serial.available()){
  delay(del);
  int index=0;
  int numchar=Serial.available();
  Serial.println(numchar);
  while(numchar--){
    Buffer[index++]=Serial.read();
    }
    Serial.println(Buffer);
    ShowRGB(Buffer);
  }
}
void ShowRGB(char* data){
 int a=(int)data[0]-48;
 int b=((int)data[1]-48)*100+((int)data[2]-48)*10+((int)data[3]-48);
 if(b<0) b=0;
 Serial.print("a=");
 Serial.println(a);
 Serial.print("b=");
 Serial.println(b);
 analogWrite(a,b);
  }
