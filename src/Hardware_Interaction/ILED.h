#ifndef LED_h
#define LED_h




class ILED
{
    public:
        virtual void shortSignal() = 0;
        virtual void longSignal()  = 0;
        virtual void loading()     = 0;
        virtual void error()       = 0;
};



#endif