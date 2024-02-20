#ifndef MBR_FlowMeter_h
#define MBR_FlowMeter_h

#include <Arduino.h>

class MBR_FlowMeter{
  public:
    MBR_FlowMeter(uint8_t pin); // pin and Vin
    float read();
    void print();

    
  private:
    float _flowRate;
    float _duration;
    float _mLperPulse = 2.25; // mL per rotation
    float _diameter = 14.5; // mm
    float _area = (3.1459 * pow(_diameter,2))/4; 
    float _distancePerPulse = (_mLperPulse * 1000)/_area; // [mm] mL = 1000mm^3
    uint8_t _pin;
};


#endif