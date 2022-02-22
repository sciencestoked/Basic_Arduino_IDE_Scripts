#include <DHT.h>

DHT dht(2,DHT11);

void setup() 
{
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));
  dht.begin();  
}

void loop() 
{
//  digitalWrite(LED_BUILTIN,HIGH);
//  delay(200);
//  digitalWrite(LED_BUILTIN,LOW);
//  delay(200);

float hum = dht.readHumidity();

float temp_C = dht.readTemperature();

float temp_F = dht.readTemperature(true);

if (isnan(hum) || isnan(temp_C) || isnan(temp_F) )
{
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
}


Serial.print(F(" Humidity: "));
Serial.print(hum);
Serial.print(F("%  Temperature: "));
Serial.print(temp_C);
Serial.print(F("°C "));
Serial.print(temp_F);
Serial.print(F("°F "));

}
