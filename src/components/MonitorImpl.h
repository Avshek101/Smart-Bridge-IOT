#ifndef __MONITORIMPL__
#define __MONITORIMPL__

#include "../../../lib/LiquidCrystal_I2C/LiquidCrystal_I2C.h"
#include "Monitor.h"

class MonitorImpl : public Monitor
{
public:
    MonitorImpl(uint8_t addr, uint8_t cols, uint8_t rows);
    void init();
    void turnOn();
    void turnOff();
    void showMessage();
    void clear();

private:
    LiquidCrystal_I2C *lcd;
};

#endif