// Blink LED on pin 13
void setup() {
  for(int a = 2; a <= 6; a++){
    pinMode(a, OUTPUT); // Set pin 13 as an output
  }
}

void loop() {
  for(int f = 2; f <= 6; f++)
    digitalWrite(f, HIGH); // Turn LED on
    delay(500);            // Wait for 1 second (1000 ms)
    //digitalWrite(f, LOW);  // Turn LED off
}
