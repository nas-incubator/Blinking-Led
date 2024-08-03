// Pin 13 has an LED connected on most Arduino boards.
const int ledPin = 2;

// The setup function runs once when you press reset or power the board.
void setup() {
  // Initialize digital pin 13 as an output.
  pinMode(ledPin, OUTPUT);
}

// The loop function runs over and over again forever.
void loop() {
  // Turn the LED on (HIGH is the voltage level).
  digitalWrite(ledPin, HIGH);
  // Wait for a second.
  delay(1000);
  // Turn the LED off by making the voltage LOW.
  digitalWrite(ledPin, LOW);
  // Wait for a second.
  delay(1000);
}