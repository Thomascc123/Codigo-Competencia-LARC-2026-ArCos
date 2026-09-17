#include"Wheel.h"

Wheel::Wheel(int right_pin, int left_pin){
  this->right_pin = right_pin;
  this->left_pin = left_pin;
}

Wheel::Wheel(){
}

void Wheel::change_direction(Direction new_direction){
  switch(new_direction){
    case CLOCKWISE:
        digitalWrite(right_pin, HIGH);
        digitalWrite(left_pin, LOW);
      break;
    case COUNTER_CLOCKWISE:
        digitalWrite(right_pin, LOW);
        digitalWrite(left_pin, HIGH);
      break;
  }
}

void Wheel::off_wheel(){
  digitalWrite(right_pin, LOW);
  digitalWrite(left_pin, LOW);
}


