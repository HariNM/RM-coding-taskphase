//using Arduino blink led for 1,2,3 seconds and loop
/*

*/

void setup() {
    pinMode(13,OUTPUT);
}

void loop() {
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,HIGH);
    delay(2000);
    digitalWrite(13,HIGH);
    delay(2000);
    digitalWrite(13,HIGH);
    delay(3000);
    digitalWrite(13,HIGH);
    delay(3000);
}
