#ifndef CAR_H
#define CAR_H

#include <Arduino.h>
#include"Wheel.h"

class Car{
  private:
    Wheel rightUpWheel;
    Wheel leftUpWheel;
    Wheel rightDownWheel; 
    Wheel leftDownWheel;
  
  public:
    Car(Wheel rightUp, Wheel leftUp, Wheel rightDown, Wheel downLeft);
    void stop();
    void goFront();
    void goBack();
    void goRight();
    void goLeft();
};

#endif