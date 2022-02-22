#define led LED_BUILTIN

void setup() 
{

  pinMode(led,OUTPUT);

}

void loop() 
{

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
  
}
