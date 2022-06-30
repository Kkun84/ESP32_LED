#include <Arduino.h>

#define PIN_LED 32

void setup()
{
    Serial.begin(115200);
    delay(500);
    Serial.printf("setup()\n");
    pinMode(PIN_LED, OUTPUT);
}

void loop()
{
    digitalWrite(PIN_LED, HIGH);
    Serial.printf("High\n");
    delay(100);
    digitalWrite(PIN_LED, LOW);
    Serial.printf("Low\n");
    delay(400);
}
