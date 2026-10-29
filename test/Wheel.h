#ifndef WHEEL_H
#define WHEEL_H

#include <Arduino.h>

enum Direction{
  CLOCKWISE, COUNTER_CLOCKWISE
};

class Wheel{
  public:
    int right_pin;
    int left_pin;
    int speed_pin;

    Wheel(int right_pin, int left_pin, int speed_pin);
    Wheel();
    void change_direction(Direction new_direction);
    void off_wheel();
    void change_speed(int speed);
};

#endif