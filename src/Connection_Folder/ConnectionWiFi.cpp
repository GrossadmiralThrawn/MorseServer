#include "ConnectionWiFi.h"
#include <string>
#include <WiFi.h>
#include <Hardware_Interaction/StandardLED.h>
#include <WebServer.h>
#include <Arduino.h> //Beinhaltet den Datentyp String.




bool connectionSuccessed = false;




ConnectionWiFi::ConnectionWiFi(ILED* giveILED): iLED(giveILED), server(7567) //Initialisierung der Servervariable auf Port 7567
{
    connectToInternet();



    if (connectionSuccessed)
    {
        this->receive(); //Fängt an Daten zu empfangen, wenn die Verbindung erfolgreich aufgebaut werden konnte.
    }
    else
    {
        giveILED->error(); //Blinkt eine Fehlermeldung, wenn die Verbindung fehlschlägt.
    }
}




int ConnectionWiFi::scanForConnection()
{
    int possibleConnections = WiFi.scanNetworks();


    return possibleConnections;
}




void ConnectionWiFi::connectToInternet()
{
    if (scanForConnection() > 0)
    {
        WiFi.begin(ssid, password);


        while (WiFi.status() != WL_CONNECTED)
        {
            iLED->loading();
            sleep(100);
        }
        

        iLED->success();
        connectionSuccessed = true;
    }
    else
    {
        iLED->error();
    }
    
}




void ConnectionWiFi::send()
{
}




void ConnectionWiFi::receive()
{
    //Kann als Unterfunktion gesehen werden, die entsprechende Requests handlet (Callback-Funktion)
    server.on("/morseserver", HTTP_POST, [this]() {
        //Schiebt Daten in den entsprechenden String. Daten als Übergabeparameter übergeben.
        String receivedData = server.arg("data");
        if (!receivedData.isEmpty()) {
            this->receivedData = receivedData;
        }
        server.send(200, "text/plain", "Data received successfully"); //Antwort im Erfolgsfall.
    });
}




String ConnectionWiFi::getData()
{
    String returningData = receivedData;


    receivedData         = "";



    return returningData;
}