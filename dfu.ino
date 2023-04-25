int setupMessage = 0;

void setup() {
  Serial.begin(115200);
  pinMode(6, OUTPUT);
  pinMode(8, INPUT);
}

void loop() {
  while (digitalRead(8) == LOW) {
    //if(setupMessage = 0){
      Serial.print("Waiting for start...");
      setupMessage = 1;
    //}
  }
  Serial.println("Resetting device");
  analogWrite(6, 66); //reset
  Serial.println("Waiting 0.5 seconds");
  delay(500);
  Serial.println("Setting force_dfu");
  analogWrite(6, 40); //force_dfu
  setupMessage = 0;
}
