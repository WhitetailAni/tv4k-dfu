void setup() {
  Serial.begin(115200);
  pinMode(6, OUTPUT);
  pinMode(8, INPUT);
}

void loop() {
  Serial.print("Waiting for start...");
  while (digitalRead(8) == LOW) {
  }
  
  Serial.println("Resetting device");
  analogWrite(6, 66); //reset
  
  Serial.println("Waiting 0.5 seconds");
  delay(500);
  
  Serial.println("Setting force_dfu");
  analogWrite(6, 40); //force_dfu
}
