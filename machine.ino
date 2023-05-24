#define sensorPin A1
#define ledPin 13
#include<SoftwareSerial.h>

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int x=analogRead(sensorPin);
  Serial.println(x);
  if(x>500)digitalWrite(13, HIGH);
  else digitalWrite(13, LOW);

}