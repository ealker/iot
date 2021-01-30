/*
 * 
 * Name: BlinkLED
 * Date: 27 January 2021 
 * Github: elliotalker
 * 
*/

#define LED D7 // NodeMCU D7 GPIO Pin 13 (https://www.electronicwings.com/nodemcu/nodemcu-gpio-with-arduino-ide)

void setup() {
  pinMode(LED, OUTPUT);   
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);            
  digitalWrite(LED, LOW); 
  delay(1000); 
}
