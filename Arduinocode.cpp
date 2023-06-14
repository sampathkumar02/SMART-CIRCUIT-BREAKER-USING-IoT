#include <LiquidCrystal.h>
char inChar;
const int load1=4;
const int load2=5;
int sen1=6;
int sen2=7;

LiquidCrystal lcd(13, 12, 11, 10, 9, 8); digitalWrite(load1,HIGH)); digitalWrite(load2,LOW);
void setup() {
  // setup code here, to run once:
  pinMode(load1, OUTPUT); 
  pinMode(load2, OUTPUT);
  digitalWrite(load1,HIGH);
  digitalWrite(load2,HIGH);
  pinMode(sen1,INPUT);  
  pinMode(sen2,INPUT);
  lcd.begin(16, 2);
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("IOT BASED HOME");
   lcd.setCursor(0,1);
    lcd.print("AUTOMATION");
   delay(500);
   
void loop() {
  // main code here, to run repeatedly:
    if(digitalRead(sen1)==LOW){ 
     lcd.setCursor(0,0);
    lcd.print("LOAD1: ON");
   delay(500);
  digitalWrite(load1,HIGH);
    }
        if(digitalRead(sen1)==HIGH){  
        lcd.setCursor(0,0);
      lcd.print("LOAD1: OFF        ");
   delay(500);
     digitalWrite(load1,LOW);

    }
    if(digitalRead(sen2)==LOW){  
        lcd.setCursor(0,1);
      lcd.print("LOAD2: ON        ");
   delay(500);
     digitalWrite(load2,HIGH);
 }
    if(digitalRead(sen2)==HIGH){  
        lcd.setCursor(0,1);
      lcd.print("LOAD2: OFF         ");
   delay(500);
     digitalWrite(load2,LOW);
  }
   } 
