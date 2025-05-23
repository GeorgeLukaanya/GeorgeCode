void MyDelay(unsigned long mSecondsApx);

void setup() {
  // Set DDRB to make pin 13 (bit 5) an output
  unsigned char *portDDRB = (unsigned char *) 0x24;
  *portDDRB |= 0x20;
}

void loop() {
  // Use PORTB to toggle pin 13
  unsigned char *portB = (unsigned char *) 0x25;

  *portB |= 0x20;    // Set bit 5 high (LED ON)
  MyDelay(1000);

  *portB &= 0xDF;    // Clear bit 5 (LED OFF)
  MyDelay(1000);
}

void MyDelay(unsigned long mSecondsApx) {
  volatile unsigned long i;
  unsigned long endTime = 1000 * mSecondsApx;

  for (i = 0; i < endTime; i++);
}
