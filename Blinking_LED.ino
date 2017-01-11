
/* 
 *  First Tutorial on getting startet with Arduino
 *  LED on Pin 13 blinks every second for one second
*/

// set variable led to value 13 (gpio pin 13)
int led = 13;

void setup() {
// define our led variable Pin as output
  pinMode(led, OUTPUT);
}

void loop() {
  // digitalWrite command changes values on our defined Pins
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
