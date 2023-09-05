#include "ConnectionWiFi.h"
#include <string>
#include <WiFi.h>
#include <Hardware_Interaction/StandardLED.h>
#include <WebServer.h>




ConnectionWiFi::ConnectionWiFi(ILED* giveILED): iLED(giveILED), server(7567) //Initialisierung der Servervariable auf Port 7567
{
    this->receive();
}




int ConnectionWiFi::scanForConnection()
{
    int possibleConnections = WiFi.scanNetworks();


    return possibleConnections;
}




bool ConnectionWiFi::connectToInternet()
{
    if (scanForConnection() > 0)
    {
        WiFi.begin(ssid, password);


        while (WiFi.status() != WL_CONNECTED)
        {
            iLED->loading();
        }
        


        return true;
    }
    

    return false;
}




void ConnectionWiFi::send()
{
}




void ConnectionWiFi::receive()
{
    server.on("/", HTTP_POST, [this]() {
        String receivedData = server.arg("data");
        if (!receivedData.isEmpty()) {
            this->receivedData = receivedData;
        }
        server.send(200, "text/plain", "Data received successfully");
    });

}




std::string ConnectionWiFi::getData()
{
    std::string parsedData = "SOS";



    return parsedData;
}