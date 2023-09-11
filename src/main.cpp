#include <Arduino.h>
#include <Connection_Folder/ConnectionWiFi.h>
#include <Morse_Folder/Morse.h>
#include <Hardware_Interaction/StandardLED.h>




StandardLED    *standardLED = new StandardLED();
ConnectionWiFi *connection  = new ConnectionWiFi(standardLED);
Morse          morse        = Morse(connection, standardLED);




void setup() {
  connection = new ConnectionWiFi(standardLED);
  morse      =     Morse(connection, standardLED);
}




void loop() {
}
