#include "ThingSpeak.h"
#include <ESP8266WiFi.h>

//Replace wifi credentials here
const char* ssid     = "TEST1234";//Replace with Wifi Name
const char* password = "test1234";// Replace with wifi Password

//change channel number here
unsigned long channel =419422;
unsigned int sen1 = 1;
unsigned int sen2 = 2;


WiFiClient  client;


void setup() {

  
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  digitalWrite(D1, 0);
  digitalWrite(D2, ,0);
 
  
  WiFi.begin(ssid, password);
while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  
  }
 
 WiFi.localIP();
WiFi.subnetMask();
  WiFi.gatewayIP();
  ThingSpeak.begin(client);
}
void loop() {
 
  //get the last data of the fields
  int sen_1 = ThingSpeak.readFloatField(channel, sen1);
  int sen_2 = ThingSpeak.readFloatField(channel, sen2);
   if(sen_1 == 1){
    digitalWrite(D1, 1);
  }
  else if(sen_1 == 0){
    digitalWrite(D1, 0);
  }
  if(sen_2 == 1){
    digitalWrite(D2, 1);
  }
  else if(sen_2 == 0){
    digitalWrite(D2, 0);
  }
   delay(5000);
 }
