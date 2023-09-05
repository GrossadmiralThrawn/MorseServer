#include "StandardLED.h"
#include <Arduino.h>




StandardLED::StandardLED()
{
    pinMode(LED_BUILTIN, OUTPUT);
}




StandardLED::~StandardLED()
{}




void StandardLED::shortSignal()
{
    digitalWrite(LED_BUILTIN, HIGH);
    
    
    delay(500);


    digitalWrite(LED_BUILTIN, LOW);


    delay(500);
}




void StandardLED::longSignal()
{
    digitalWrite(LED_BUILTIN, HIGH);


    delay(1000);


    digitalWrite(LED_BUILTIN, LOW);


    delay(1000);
}




void StandardLED::loading()
{
    digitalWrite(LED_BUILTIN, HIGH);

    delay(750);

    digitalWrite(LED_BUILTIN, LOW);

    delay(750);
}




void StandardLED::error()
{
    digitalWrite(LED_BUILTIN, HIGH);

    delay(250);

    digitalWrite(LED_BUILTIN, LOW);

    delay(250);


    digitalWrite(LED_BUILTIN, HIGH);

    delay(250);

    digitalWrite(LED_BUILTIN, LOW);

    delay(250);


    digitalWrite(LED_BUILTIN, HIGH);

    delay(250);

    digitalWrite(LED_BUILTIN, LOW);
}