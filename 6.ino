//Ultrasonic sensor with LED
int trigpin=12,echopin=11,traveltime;

void setup()
{
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(LED_BUILTIN,OUTPUT);
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
  Serial.println(traveltime);
  if(traveltime<15){
    digitalWrite(LED_BUILTIN,LOW);
  }
  if(traveltime>=15&&traveltime<50){
    digitalWrite(LED_BUILTIN,HIGH);
  }
  if(traveltime>50){
    digitalWrite(LED_BUILTIN,LOW);
  }
}
