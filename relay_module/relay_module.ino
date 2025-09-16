// Relay connected to pin 7
int relayPin = 7;

void setup() {
  pinMode(relayPin, OUTPUT);   // Set relay pin as output
  digitalWrite(relayPin, HIGH); // Keep relay OFF initially (active LOW)
}

void loop() {
  // Turn ON relay
  digitalWrite(relayPin, LOW);   // Relay ON
  delay(2000);                  // Keep ON for 2 seconds

  // Turn OFF relay
  digitalWrite(relayPin, HIGH);  // Relay OFF
  delay(2000);                  // Keep OFF for 2 seconds
}
