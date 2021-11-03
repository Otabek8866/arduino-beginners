
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define ledPin 13

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  // initialize timer1
  noInterrupts();           // disable all interrupts
  TCCR1A = 0;
  TCCR1B = 0;
  TCNT1  = 0;

  OCR1A = 65000;            // compare match register 16MHz/256/2Hz
  TCCR1B |= (1 << WGM12);   // CTC mode
  TCCR1B |= (1 << CS12);    // 256 prescaler
  TIMSK1 |= (1 << OCIE1A);  // enable timer compare interrupt
  interrupts();             // enable all interrupts
}

ISR(TIMER1_COMPA_vect)          // timer compare interrupt service routine
{
  digitalWrite(ledPin, digitalRead(ledPin) ^ 1);   // toggle LED pin
  Serial.println("natija");
  Serial.println(TIMSK1);
  Serial.println(TCCR1A);
  Serial.println(TCCR1B);
  Serial.println(TCNT1);
  Serial.println(OCR1A);
  Serial.println(WGM12);
  Serial.println(CS12);
  Serial.println(OCIE1A);
}

void loop()
{ 
  
}

