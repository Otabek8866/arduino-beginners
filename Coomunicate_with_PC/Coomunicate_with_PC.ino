int del=50;

void setup() {
for(int i=0; i<=13; i++){
  pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  char Buffer[14];
if(Serial.available()){
  int index=0; delay(del);
  int numchar=Serial.available();
  Serial.print("Numchar : ");
  Serial.println(numchar);
  while(numchar--){
    Buffer[index++]=Serial.read();
    }
    Serial.println(Buffer);
    showLED(Buffer,index);
//for(int i=0; i<=13; i++){
//    Buffer[i].clear();
 //  }
}
}
void showLED(char* data, int datasize){
  for(int i=0; i<datasize; i++){
    if((data[i]=='1')
    digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    }
  }
