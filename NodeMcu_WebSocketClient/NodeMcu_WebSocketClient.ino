#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

WiFiServer server(80);
WiFiClient cl;

String message="";
int i;

void setup()
{
  i = 0;
  
  Serial.begin(9600);

  WiFi.disconnect();
  delay(1000);
  
  WiFi.begin("Akash Narayan","akash@iot");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
  }Serial.println(WiFi.localIP());
}


void loop()
{
  server.begin();

  if(i==20){
    i=0;
  }

  
  message=String(i);
  message+=".";
  message+=String(analogRead(A0));
  i++;

  //DHT.read11(DHT11_PIN);
  //message=(int)DHT.temperature;
  //message+=".";
  //message+=(int)DHT.humidity;
  
  if(cl.connect("192.168.0.105",5001))
  {
    Serial.println(message);
    cl.print(message);
    cl.flush();
    cl.stop();
    delay(2000);
  }
  else
  {
    Serial.println("Connection Failed.\n");
  }
}

