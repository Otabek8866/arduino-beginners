int TIME=50
;
void setup() {
  for(int i=0; i<=13; i++){
    pinMode(i,OUTPUT);
    }
   
   /*pinMode(9,INPUT);
   pinMode(6,INPUT);
   pinMode(5,INPUT);
*/
}

void loop() {
/*analogWrite(6,255);
analogWrite(5,0);
analogWrite(9,0);
delay(TIME);
analogWrite(6,0);
analogWrite(5,255);
analogWrite(9,0);
delay(TIME);
analogWrite(6,0);
analogWrite(5,0);
analogWrite(9,255);
delay(TIME);
*/
GoOn();
GoBack();
}
void GoOn(){
  for(int i=0; i<=13; i++){
  digitalWrite(i,HIGH);
  delay(TIME);
  digitalWrite(i,LOW);
  delay(TIME);
  }
  }
  void GoBack(){
    for(int i=12; i>=1; i--){
  digitalWrite(i,HIGH);
  delay(TIME);
  digitalWrite(i,LOW);
  delay(TIME);
    }
    }
