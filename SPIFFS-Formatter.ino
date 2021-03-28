#include <SPIFFS.h>

void setup() {
  SPIFFS.begin(true);
  SPIFFS.format();
  SPIFFS.end();

  esp_deep_sleep_start();
}

void loop() {
}
