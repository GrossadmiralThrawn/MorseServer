#include "Morse.h"
#include <string>




Morse::Morse(IConnection *givenConnection, ILED *iLED): iConnection(givenConnection), iLED(iLED)
{
}




Morse::~Morse()
{
    delete iConnection;
}




void Morse::test() {
    iConnection->send();
}




bool Morse::testSOS(String* __restrict data)
{
    if (data->length() == 3 && ((*data)[0] == 'S'|| (*data)[0] == 's') && ((*data)[1] == 'O' || (*data)[1] == 'o') && ((*data)[2] == 'S' || (*data)[2] == 'o'))
    {
        return true;
    }
    

    return false;
}




void Morse::morse()
{
    String data = iConnection->getData();


    if (testSOS(&data))
    {
        iLED->shortSignal();
        iLED->shortSignal();
        iLED->shortSignal();


        iLED->longSignal();
        iLED->longSignal();
        iLED->longSignal();


        iLED->shortSignal();
        iLED->shortSignal();
        iLED->shortSignal();
    }
}




void printA()
{}




void printB()
{}




void printC()
{}




void printD()
{}




void printE()
{}




void printF()
{}




void printG()
{}




void printH()
{}




void printI()
{}




void printJ()
{}




void printK()
{}




void printL()
{}




void printM()
{}




void printN()
{}




void printO()
{}




void printP()
{}




void printQ()
{}




void printR()
{}




void printS()
{}




void printT()
{}




void printU()
{}




void printV()
{}




void printW()
{}




void printX()
{}




void printY()
{}




void printZ()
{}