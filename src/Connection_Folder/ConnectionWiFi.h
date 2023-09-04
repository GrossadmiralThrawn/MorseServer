#ifndef ConnectionWiFi_h
#define ConnectionWiFi_h




#include "IConnection.h"  // Inkludieren Sie die benötigten Header
#include <Hardware_Interaction/ILED.h>
#include <WiFi.h>
#include <WebServer.h>




class ConnectionWiFi: public IConnection
{
    public: 
        WebServer server; // Deklaration der server-Variable
        ILED*       iLED;
        explicit    ConnectionWiFi(ILED* giveILED);                // Konstruktor-Deklaration
                    ~ConnectionWiFi();
        bool        connectToInternet() override;  // Überschreiben die virtuellen Funktionen
        int         scanForConnection() override;
        void        send()              override;
        void        receive()           override;
        std::string getData()           override;




    private:
        const char *ssid     = "FRITZ!Box 7590 LO";
        const char *password = "08791583302719586959";
};

#endif
