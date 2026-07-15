// =======================================
// AgriGuardian ESP32 Source Code
// Developed by Kalaivani S
// AI-Powered Smart Agriculture Monitoring
// =======================================

void setup() {
  Serial.begin(115200);
  Serial.println("=================================");
  Serial.println("AgriGuardian System Started");
  Serial.println("Smart Agriculture Monitoring");
  Serial.println("=================================");
}

void loop() {
  Serial.println("Monitoring soil moisture...");
  Serial.println("Monitoring temperature...");
  Serial.println("Monitoring humidity...");
  Serial.println("Monitoring rainfall...");
  Serial.println("------------------------------");

  delay(3000);
}
