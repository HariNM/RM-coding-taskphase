//Ultrasonic sensor with LED
int trigpin=12,echopin=11,traveltime,distance;

void setup()
{
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(8,OUTPUT);
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
  Serial.println("distance=");
  Serial.println(distance);
  if(distance<15){
    digitalWrite(8,LOW);
  }
  if(distance>=15&&distance<50){
    digitalWrite(8,HIGH);
  }
  if(distance>50){
    digitalWrite(8,LOW);
  }
}
