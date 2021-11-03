int del=1000;
int del_2=500;
int D1=8;
int D2=9;
int D3=10;
int D4=11;

void setup() {
for(int i=1; i<=11; i++)
pinMode(i,OUTPUT);
}

void loop() {
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
   work();
}

void D4_function(){
  for(int i=0; i<del_2; i++){
  digitalWrite(D4,true);
  digitalWrite(D3,false);
  nol(); delay(1);
  digitalWrite(D4,false);
  digitalWrite(D3,true);
  nol();  delay(1);
  }
  }
// to turn off all lights
void turn_off(){
for(int i=1; i<=7; i++)
digitalWrite(i,HIGH);
}
// all members 
void nol(){
turn_off();
for(int i=1; i<7; i++){
digitalWrite(i,LOW);
}  
}
void one(){
turn_off();
digitalWrite(2,LOW);
digitalWrite(3,LOW);  
}
void two(){
turn_off();
for(int i=1; i<=7; i++){
if(i==3||i==6) continue;
digitalWrite(i,LOW);
}   
}
void three(){
turn_off();
for(int i=1; i<=7; i++){
if(i==5||i==6) continue;
digitalWrite(i,LOW);
}   
}
void four(){
turn_off();
for(int i=1; i<=7; i++){
if(i==1||i==4||i==5) continue;
digitalWrite(i,LOW);
}   
}
void five(){
turn_off();
for(int i=1; i<=7; i++){
if(i==2||i==5) continue;
digitalWrite(i,LOW);
}   
}
void six(){
turn_off();
for(int i=1; i<=7; i++){
if(i==2) continue;
digitalWrite(i,LOW);
}   
}
void seven(){
turn_off();
for(int i=1; i<=7; i++){
if(i!=1&&i!=2&&i!=3) continue;
digitalWrite(i,LOW);
}   
}
void eight(){
turn_off();
for(int i=1; i<=7; i++){
digitalWrite(i,LOW);
}   
}
void nine(){
turn_off();
for(int i=1; i<=7; i++){
if(i==5) continue;
digitalWrite(i,LOW);
}   
}
void work(){
  for(int i=0; i<del; i++){
  D4_light();
  nol(); delay(1);
  }
for(int i=0; i<del_2; i++){
  digitalWrite(D4,true);
  digitalWrite(D3,false);
  one(); delay(1);
  digitalWrite(D4,false);
  digitalWrite(D3,true);
  nol(); delay(1);
  }
  for(int i=0; i<del_2; i++){
  digitalWrite(D4,true);
  digitalWrite(D3,false);
  three(); delay(1);
  digitalWrite(D4,false);
  digitalWrite(D3,true);
  nol(); delay(1);
  }
  for(int i=0; i<del_2; i++){
  digitalWrite(D4,true);
  digitalWrite(D3,false);
  four(); delay(1);
  digitalWrite(D4,false);
  digitalWrite(D3,true);
  nol(); delay(1);
  }
  }
void D1_light(){
  digitalWrite(D1,1);
  digitalWrite(D2,0);
  digitalWrite(D3,0);
  digitalWrite(D4,0);
}
void D2_light(){
  digitalWrite(D1,0);
  digitalWrite(D2,1);
  digitalWrite(D3,0);
  digitalWrite(D4,0);
  }  
void D3_light(){
  digitalWrite(D1,0);
  digitalWrite(D2,0);
  digitalWrite(D3,1);
  digitalWrite(D4,0);
  }
 void D4_light(){
  digitalWrite(D1,0);
  digitalWrite(D2,0);
  digitalWrite(D3,0);
  digitalWrite(D4,1);
  }
