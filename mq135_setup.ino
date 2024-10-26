#include <Wire.h>
#include <Arduino.h>

#define PPM_PIN 4

void setup() {
  Wire.begin(23, 22);
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
}

void loop() {
   int16_t ppmValue = analogRead(PPM_PIN);
   int mappedppmValue = (ppmValue/4.095);
   Serial.print("PPM: ");
   Serial.println(mappedppmValue);
   
   delay(100); 
}

