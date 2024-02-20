#include "MBR_FlowMeter.h"


MBR_FlowMeter::MBR_FlowMeter(uint8_t pin){
    _pin = pin;
    pinMode(_pin, INPUT);
}


float MBR_FlowMeter::read(){
    _duration = pulseIn(_pin, HIGH) / 1000; // [sec/pulse]
    _flowRate = (_distancePerPulse * _duration) / 1000; //  [m / sec]
    return _flowRate;
}


void MBR_FlowMeter::print(){
    Serial.print("  duration [sec/pulse] = "); Serial.print(_duration);
    Serial.print("  flowRate [m/sec] = "); Serial.print(_flowRate);
}