#define led LED_BUILTIN

#include <WiFi.h>

char ssid[] = "Shubhammmmm";
const char* password = "9351326625mmm";
int buzz=8;

void setup() 
{

  pinMode(led,OUTPUT);
  pinMode(buzz,OUTPUT);
  digitalWrite(led,LOW);
  
  Serial.begin(115200);
  WiFi.begin(ssid,password);
}

void loop() 
{
    if(WiFi.status() != WL_CONNECTED)
  {
    Serial.println("Connecting...");
    digitalWrite(led,HIGH);
    delay(250);
    digitalWrite(led,LOW);
    delay(250);
  }

  if(WiFi.status() == WL_CONNECTED)
  {
  Serial.println("Successfully Connected !");
  tone(buzz,400);
  }

/*
  for (int tim=50;tim<=1000;tim+=50)
  {
    digitalWrite(led,HIGH);
    delay(50);
    digitalWrite(led,LOW);
    delay(tim);

  }

  for (int tim=1000;tim>=50;tim-=50)
  {
    digitalWrite(led,HIGH);
    delay(50);
    digitalWrite(led,LOW);
    delay(tim);
  }
*/

}
