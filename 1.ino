/*
  This program blinks pin 12 of the Arduino (the
  built-in LED) for 1,2,3 seconds
*/

void setup()
{
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  delay(2000);
  digitalWrite(12, HIGH);
  delay(3000);
  digitalWrite(12, LOW);
  delay(3000);
}
