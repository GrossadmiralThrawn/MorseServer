#include <Arduino.h>
#include <Connection_Folder/ConnectionWiFi.h>
#include <Morse_Folder/Morse.h>
#include <Hardware_Interaction/StandardLED.h>




StandardLED    *standardLED;
ConnectionWiFi *connection;
Morse          morse         = Morse(connection, standardLED);




void setup() {
  standardLED = new StandardLED();
  connection  = new ConnectionWiFi(standardLED);
  morse       =     Morse(connection, standardLED);
}




void loop() {
}
