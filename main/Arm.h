#ifndef ARM_H
#define ARM_H

#include<Stepper.h>
#include<Servo.h>
#include"ArmStepper.h"

class Arm{
  public: 
    ArmStepper *armStepper;
    Servo armServo;
    Servo clawServo;

    Arm(ArmStepper *armStepper, int armServoPin, int clawServoPin);
    void takeBall();
    void storeRight();
    void storeLeft();
};

#endif