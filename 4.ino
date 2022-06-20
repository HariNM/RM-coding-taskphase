// Servo
#include<Servo.h>
int servopin=9,pos;
Servo servo9;
  
void setup()
{
  Serial.begin(9600);
  servo9.attach(servopin);
}

void loop()
{
  Serial.println("input the angle");
  while(Serial.available()==0){
  }
  pos=Serial.parseInt();
  servo9.write(pos);
  
}
