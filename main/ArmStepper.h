#ifndef ARMSTEPPER_H
#define ARMSTEPPER_H

#include<Stepper.h>

#define IN_1_ARM 54
#define IN_2_ARM 55
#define IN_3_ARM 56
#define IN_4_ARM 57

#include<Arduino.h>

class ArmStepper{
  public:
    Stepper* armMotor = nullptr;
    int armSteps = 7500;
    ArmStepper(int stepsPerRevolution, int IN1, int IN2, int IN3, int IN4, int speed);
    void extendArm();
    void contractArm();
};

#endif