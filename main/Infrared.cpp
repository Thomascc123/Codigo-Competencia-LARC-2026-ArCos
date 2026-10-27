#include"Infrared.h"

Infrared::Infrared(int pin){
  this->pin = pin;
}

LineState Infrared::getLine(){
  if(digitalRead(this->pin) == HIGH){
    return InLine;
  }
  return OutLine;
}