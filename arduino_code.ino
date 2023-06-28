// PIR Sensor pin
const int pirPin = 2;
// Flame Sensor pin
const int flamePin = 3;
// MQ2 Gas Sensor pin
const int mq2Pin = A0;

void setup() {
  // Initialize Serial communication
  Serial.begin(9600);

  // Set the PIR sensor pin as INPUT
  pinMode(pirPin, INPUT);

  // Set the Flame sensor pin as INPUT
  pinMode(flamePin, INPUT);

  // Print a message indicating the setup is complete
  Serial.println("Sensor setup complete!");
}

void loop() {
  // Read the PIR sensor value
  int pirValue = digitalRead(pirPin);

  // Read the Flame sensor value
  int flameValue = digitalRead(flamePin);

  // Read the MQ2 Gas sensor value
  int mq2Value = analogRead(mq2Pin);

  // If the PIR sensor detects motion (HIGH signal)
  if (pirValue == HIGH) {
    // Print a message indicating motion is detected
    Serial.print("Motion detected!");
    // Add your desired actions here when motion is detected
  }

  // If the Flame sensor detects flame (LOW signal)
  if (flameValue == LOW) {
    // Print a message indicating flame is detected
    Serial.println("Flame detected!");

    // Add your desired actions here when flame is detected
  }

  // Print the MQ2 Gas sensor value
  if (mq2Value > 600) {
     Serial.print("MQ2 Gas Sensor value: ");
     Serial.println(mq2Value);
     Serial.print("\nGas Leak Detected");

  // Add your desired actions here based on the MQ2 Gas sensor value
  }

  // Delay before the next sensor readings
  delay(1000);
}
