#include"ArmStepper.h"

ArmStepper::ArmStepper(int stepsPerRevolution, int IN1, int IN2, int IN3, int IN4, int speed){
  this->armMotor = new Stepper(stepsPerRevolution, IN1, IN3, IN2, IN4);
  armMotor->setSpeed(speed);
}

void ArmStepper::extendArm(){
  this->armMotor->step(-this->armSteps);
}

void ArmStepper::contractArm(){
  this->armMotor->step(this->armSteps);
}