int del_function=0.5;
int del_turnoff=0.5;
int del_cycle=1;
int D1=8;
int D2=9;
int D3=10;
int D4=11;
int search=A0;
int harf=13;
int nuqta=12;
int D1_qiymat=0;
int D2_qiymat=0;
int D3_qiymat=0;
int D4_qiymat=0;
double qiymat=0.00488;
int Asos;
void setup() {
for(int i=1; i<=13; i++)
pinMode(i,OUTPUT);
pinMode(search,INPUT);
Serial.begin(9600);

}
void loop() {
  double  a=0;
  a=analogRead(search);
  Serial.print("Olingan natija: "); Serial.println(a);
  a=a*qiymat;  Serial.print("Voltagi qiymati: "); Serial.println(a);
  Asos=a*1000;
  D1_qiymat=Asos/1000; Asos=Asos%1000;
  D2_qiymat=Asos/100; Asos=Asos%100;
  D3_qiymat=Asos/10; Asos=Asos%10;
  D4_qiymat=Asos;
  Serial.println(D1_qiymat);
  Serial.println(D2_qiymat);
  Serial.println(D3_qiymat);
  Serial.println(D4_qiymat);
  cycle(D1_qiymat,D2_qiymat,D3_qiymat,D4_qiymat);  
}
void cycle(int a, int b, int c, int d){
    for(int i=0; i<1000; i++){
    D4_function(d); delay(del_cycle);
    D3_function(c); delay(del_cycle);
    D2_function(b); delay(del_cycle);
    D1_function(a); delay(del_cycle);
  }
  }

// to turn off all lights
void turn_off(){
for(int i=2; i<=7; i++)
digitalWrite(i,HIGH);
digitalWrite(harf,HIGH);
digitalWrite(nuqta,LOW);
delay(del_turnoff);
}  
    void D4_function(int a){
    turn_off();
    D4_light(); delay(del_function);
    choose(a); digitalWrite (nuqta,HIGH);
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
for(int i=2; i<7; i++){
digitalWrite(i,LOW);
}digitalWrite(harf,LOW);  
}
void one(){
//turn_off();
digitalWrite(2,LOW);
digitalWrite(3,LOW);  
}
void two(){
//turn_off();
for(int i=2; i<=7; i++){
if(i==3||i==6) continue;
digitalWrite(i,LOW);
}   
digitalWrite(harf,LOW);
}
void three(){
//turn_off();
for(int i=2; i<=7; i++){
if(i==5||i==6) continue;
digitalWrite(i,LOW);
}   digitalWrite(harf,LOW);
}
void four(){
//turn_off();
for(int i=2; i<=7; i++){
if(i==1||i==4||i==5) continue;
digitalWrite(i,LOW);
}   
}
void five(){
//turn_off();
for(int i=2; i<=7; i++){
if(i==2||i==5) continue;
digitalWrite(i,LOW);
}   digitalWrite(harf,LOW);
}
void six(){
//turn_off();
for(int i=2; i<=7; i++){
if(i==2) continue;
digitalWrite(i,LOW);
}   digitalWrite(harf,LOW);
}
void seven(){
//turn_off();
for(int i=2; i<=7; i++){
if(i!=1&&i!=2&&i!=3) continue;
digitalWrite(i,LOW);
}   digitalWrite(harf,LOW);
}
void eight(){
//turn_off();
for(int i=2; i<=7; i++){
digitalWrite(i,LOW);
}   
digitalWrite(harf,LOW);
}
void nine(){
//turn_off();
for(int i=2; i<=7; i++){
if(i==5) continue;
digitalWrite(i,LOW);
}   digitalWrite(harf,LOW);
}


