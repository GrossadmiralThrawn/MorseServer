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
    bool testSOS(String* __restrict data);
    void printA();
    void printB();
    void printC();
    void printD();
    void printE();
    void printF();
    void printG();
    void printH();
    void printI();
    void printJ();
    void printK();
    void printL();
    void printM();
    void printN();
    void printO();
    void printP();
    void printQ();
    void printR();
    void printS();
    void printT();
    void printU();
    void printV();
    void printW();
    void printX();
    void printY();
    void printZ();
};

#endif  // Morse_h
