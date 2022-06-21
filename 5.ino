//Ultrasonic sensor 
int trigpin=12,echopin=11,traveltime;
void setup()
{
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
}

void loop()
{
  digitalWrite(trigpin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  traveltime=pulseIn(echopin,HIGH);
  delay(25);
  distance=traveltime*0.034/2;
  Serial.println("distance =");
  Serial.println(distance);
}
