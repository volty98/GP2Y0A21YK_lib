#ifndef __GP2Y0A21YK_H__
#define __GP2Y0A21YK_H__

#include <Arduino.h>
#include <Wire.h>

//-----------------------------------------
#define DEF_PIN (A3)
#define OPERATING_VOLTAGE (5.0)
#define RESOLUTION (1024.0)
#define BIT_VOLTAGE (OPERATING_VOLTAGE / RESOLUTION)

#define LOW_LIMIT  (0.0)
#define HIGH_LIMIT (2.6)

//-----------------------------------------
class GP2Y0A21YK
{
public:
    GP2Y0A21YK(uint8_t analog_pin = DEF_PIN)
    {
        pin = analog_pin;
        pinMode(pin, INPUT);
    };
    ~GP2Y0A21YK()
    {
        
    };
    
    double distance(void);

private:
    uint8_t pin;

};
#endif
