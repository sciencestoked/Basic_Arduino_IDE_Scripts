  int buzz = 8;

void setup()
{

  pinMode(buzz,OUTPUT);
//  tone(buzz,1000,5000);
  
}

void loop()
{
  int timep=200;
  int start_fq=500;
  int end_fq=2000;
  int fq_inc=10;
  
  int t=0;
  for (int t=start_fq;t<=end_fq;t+=fq_inc)
  {
    tone(buzz,t,timep);
    delay(timep);
  }

  for (int t=end_fq;t>=start_fq;t-=fq_inc)
  {
    tone(buzz,t,timep);
    delay(timep);
  }
  
  }
