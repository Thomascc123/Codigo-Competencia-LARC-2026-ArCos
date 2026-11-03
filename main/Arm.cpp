#include"Arm.h"

Arm::Arm(ArmStepper *armStepper, int armServoPin, int clawServoPin){
  this->armStepper = armStepper;
  this->armServo.attach(armServoPin);
  this->clawServo.attach(clawServoPin);
}

void Arm::takeBall(){
  clawServo.write(0);
  armStepper->extendArm();
  delay(300);
  clawServo.write(150);
  armStepper->contractArm();
}

void Arm::storeRight(){
  Serial.println("hola");
  armServo.write(180);
  delay(500);
  clawServo.write(0);
  delay(200);
  clawServo.write(90);
  delay(500);
  armServo.write(90);
}

void Arm::storeLeft(){
  armServo.write(0);
  delay(500);
  clawServo.write(0);
  delay(200);
  clawServo.write(100);
  delay(500);
  armServo.write(90);
}