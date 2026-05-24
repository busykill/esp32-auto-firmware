#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("ESP32 Auto Build Firmware OK");
}

void loop() {
  delay(1000);
}
