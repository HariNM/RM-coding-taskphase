//Arduino blink led for 1,2,3 seconds and loop
/*

*/

void setup() {
    pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN,HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN,HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN,HIGH);
    delay(2000);
    digitalWrite(LED_BUILTIN,HIGH);
    delay(2000);
    digitalWrite(LED_BUILTIN,HIGH);
    delay(3000);
    digitalWrite(LED_BUILTIN,HIGH);
    delay(3000);
}
