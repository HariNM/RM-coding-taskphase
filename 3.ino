//taking potentiometer readings to control brightness of led

int read;
int pot=A0;
int pinLED=6;
void setup()
{
}

void loop()
{
  read=analogRead(pot);
  read=map(read,0,1023,0,255);
  analogWrite(pinLED,read/4);
  
}
