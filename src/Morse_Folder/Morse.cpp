#include "Morse.h"
#include <string>




Morse::Morse(IConnection *giveConnection, ILED *iLED): iConnection(giveConnection), iLED(iLED)
{
}




Morse::~Morse()
{
    delete iConnection;
}




void Morse::test() {
    iConnection->send();
}




bool Morse::testSOS(std::string* __restrict data)
{
    if (data->length() == 3 && ((*data)[0] == 'S'|| (*data)[0] == 's') && ((*data)[1] == 'O' || (*data)[1] == 'o') && ((*data)[2] == 'S' || (*data)[2] == 'o'))
    {
        return true;
    }
    

    return false;
}




void Morse::morse()
{
    std::string data = iConnection->getData();


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
    else
    {
        
    }
    
}