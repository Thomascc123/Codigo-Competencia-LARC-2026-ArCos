#ifndef SONIC_H
#define SONIC_H

#include <Arduino.h>

class Sonic{
  public:
    int trigger;
    int ecco;
    int mean;
    bool voidMean = true;

    Sonic(int trigger, int ecco){
      this->ecco = ecco;
      this->trigger = trigger;
    }

    float getDistance();
    float getUnitDistance();
    void resetMean();
};

#endif