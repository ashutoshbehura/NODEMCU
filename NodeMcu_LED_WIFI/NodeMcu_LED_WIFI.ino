#include <ESP8266WiFi.h>

int ledPin = 13;

void setup()
{
  pinMode(ledPin,OUTPUT);
  Serial.begin(115200);
  WiFi.disconnect();                             //To disconnect from the already connected wifi network (if any)
  delay(1000);
  
  WiFi.begin("Akash Narayan","akash@iot");       //To connect to access point Akash Narayan with a password akash@iot
  while (!(WiFi.status() == WL_CONNECTED)){    //Check for connection establishment
    delay(300);
  }Serial.println("\nConnected");                //Message after the connection is established
}


void loop()
{
   Serial.println("led on");
  digitalWrite(ledPin,HIGH);
  delay(1000);
  digitalWrite(ledPin,LOW);
  delay(1000);

}

