#ifndef Morse_h
#define Morse_h




#include "../Connection_Folder/IConnection.h"
#include "../Connection_Folder/ConnectionWiFi.h"




class Morse
{
    public:
        explicit Morse(IConnection *giveConnection, ILED *iLED);
                 ~Morse();
             
            void     test();
            void     morse();
private:
    IConnection *iConnection;
    ILED        *iLED;
    bool testSOS(std::string* __restrict data);
};

#endif  // Morse_h
