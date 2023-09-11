#ifndef IConnection_h
#define IConnection_h




#include <Arduino.h>




class IConnection
{
    public:
        virtual int         scanForConnection() = 0;
        virtual void        connectToInternet() = 0;
        virtual void        send()              = 0;
        virtual void        receive()           = 0;
        virtual String      getData()           = 0;
};




#endif 