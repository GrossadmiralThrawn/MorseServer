#ifndef IConnection_h
#define IConnection_h




#include <string>




class IConnection
{
    public:
        virtual int         scanForConnection() = 0;
        virtual bool        connect()           = 0;
        virtual void        send()              = 0;
        virtual void        receive()           = 0;
        virtual std::string getData()           = 0;
};




#endif 