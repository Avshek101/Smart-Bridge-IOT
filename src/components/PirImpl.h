#ifndef __PIRIMPL__
#define __PIRIMPL__

#include "Pir.h"

class PirImpl : public Pir
{
public:
    PirImpl(uint8_t pin) : Pir(pin){};
    bool isDetected();
};

#endif