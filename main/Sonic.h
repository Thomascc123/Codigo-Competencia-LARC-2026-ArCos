#ifndef SONIC_H
#define SONIC_H

#include <Arduino.h>

class Sonic{
  public:
    int trigger;
    int ecco;

    Sonic(int trigger, int ecco){
      this->ecco = ecco;
      this->trigger = trigger;
    }

    float getDistance();
};

#endif