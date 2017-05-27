#include <ESP8266WiFi.h>

#define ledPin LED_BUILTIN //D0 or 16 or LED_BUILTIN 

void setup()
{
  pinMode(ledPin,OUTPUT);
  Serial.begin(115200);
  delay(1000);
}


void loop()
{
   Serial.println("led on");
  digitalWrite(ledPin,HIGH);
  delay(1000);

  Serial.println("led OFF");
  digitalWrite(ledPin,LOW);
  delay(1000);
}

