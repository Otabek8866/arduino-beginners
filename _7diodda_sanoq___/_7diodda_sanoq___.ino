int del_2=1000/28+10;
int del_function=2.5;
int del_turnoff=2.5;
int del_cycle=2;
int D1=8;
int D2=9;
int D3=10;
int D4=11;
int A_1=9;
int A_2=9;
int A_3=9;
int A_4=9;
void setup() {
for(int i=1; i<=11; i++)
pinMode(i,OUTPUT);
}

void loop() {
/*int k=2;  
D4_function(4); delay(k);
D3_function(3); delay(k);
D2_function(2); delay(k);
D1_function(1); delay(k);
*/
///---------------------------------------------
/*char Buffer[4];
 if(Serial.available()){
  delay(3); int index=0;
  int numchar=Serial.available();
  Serial.println(numchar);
  while(numchar>0){
    Buffer[index++]=Serial.read();
    numchar--;
    }
    Serial.println(Buffer);
     Buffer[0]=A_1;
     Buffer[1]=A_2;
     Buffer[2]=A_3;
     Buffer[3]=A_4;  
  }*/
  //-----------------------------------------------
start();
}

void start(){
 digitalWrite(D1,LOW);
 digitalWrite(D2,LOW);
 digitalWrite(D3,LOW);
 digitalWrite(D4,LOW);
 for(int i=0; i<=A_1; i++)  
 for(int j=0; j<=A_2; j++)
 for(int k=0; k<=A_3; k++)
 for(int h=0; h<=A_4; h++)
 cycle(i,j,k,h);
  }
void cycle(int a, int b, int c, int d){
  for(int i=1; i<=del_2; i++){
    D4_function(d); delay(del_cycle);
    D3_function(c); delay(del_cycle);
    D2_function(b); delay(del_cycle);
    D1_function(a); delay(del_cycle);
    }
  }

// to turn off all lights
void turn_off(){
for(int i=1; i<=7; i++)
digitalWrite(i,HIGH);
delay(del_turnoff);
}  
    void D4_function(int a){
    turn_off();
    D4_light(); delay(del_function);
    choose(a); 
    }
    void D3_function(int a){
    turn_off();
    D3_light(); delay(del_function);
    choose(a);
    }
    void D2_function(int a){
    turn_off();
    D2_light(); delay(del_function);
    choose(a);
    }
    void D1_function(int a){
    turn_off();
    D1_light(); delay(del_function);
    choose(a);
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
  void choose(int f){
    switch(f){
      case 0: nol(); break;
      case 1: one(); break;
      case 2: two(); break;
      case 3: three(); break;
      case 4: four(); break;
      case 5: five(); break;
      case 6: six(); break;
      case 7: seven(); break;
      case 8: eight(); break;
      case 9: nine(); break;
      }
    }
// Members
void nol(){
//turn_off();
for(int i=1; i<7; i++){
digitalWrite(i,LOW);
}  
}
void one(){
//turn_off();
digitalWrite(2,LOW);
digitalWrite(3,LOW);  
}
void two(){
//turn_off();
for(int i=1; i<=7; i++){
if(i==3||i==6) continue;
digitalWrite(i,LOW);
}   
}
void three(){
//turn_off();
for(int i=1; i<=7; i++){
if(i==5||i==6) continue;
digitalWrite(i,LOW);
}   
}
void four(){
//turn_off();
for(int i=1; i<=7; i++){
if(i==1||i==4||i==5) continue;
digitalWrite(i,LOW);
}   
}
void five(){
//turn_off();
for(int i=1; i<=7; i++){
if(i==2||i==5) continue;
digitalWrite(i,LOW);
}   
}
void six(){
//turn_off();
for(int i=1; i<=7; i++){
if(i==2) continue;
digitalWrite(i,LOW);
}   
}
void seven(){
//turn_off();
for(int i=1; i<=7; i++){
if(i!=1&&i!=2&&i!=3) continue;
digitalWrite(i,LOW);
}   
}
void eight(){
//turn_off();
for(int i=1; i<=7; i++){
digitalWrite(i,LOW);
}   
}
void nine(){
//turn_off();
for(int i=1; i<=7; i++){
if(i==5) continue;
digitalWrite(i,LOW);
}   
}

  
