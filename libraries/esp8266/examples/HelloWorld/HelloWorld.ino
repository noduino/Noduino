/*
 ESP8266 Hello World by Jack Tan
 This example code is in the public domain

 The blue LED on the ESP-01 module is connected to GPIO1 which is also
 the TXD pin; so we cannot use Serial.print() at the same time

 The blue LED on the ESP-12F module is connected to GPIO2 which is also
 the U1TXD pin; so we cannot use Serial1.print() at the same time
*/

void setup() {
	Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop() {
	Serial.println("Hello World!");
	delay(1600);                      // Wait for a second
}
