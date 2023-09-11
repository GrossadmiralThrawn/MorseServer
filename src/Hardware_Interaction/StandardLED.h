#ifndef StandardLED_h
#define StandardLED_h




#include "ILED.h"




class StandardLED: public ILED
{
    public:
        StandardLED();
        ~StandardLED();
        void shortSignal() override;
        void longSignal()  override;
        void loading()     override;
        void success()     override;
        void error()       override;
};




#endif