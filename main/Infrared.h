#ifndef INFRARED_H
#define INFRARED_H

#include <Arduino.h>

enum LineState{
  OutLine, InLine
}; 

typedef enum LineState LineState;

class Infrared{
  public:
    int pin;
    Infrared(int pin);
    LineState getLine();
};

#endif