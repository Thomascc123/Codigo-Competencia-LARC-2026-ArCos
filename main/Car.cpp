#include"Car.h"

Car::Car(Wheel rightUp, Wheel leftUp, Wheel rightDown, Wheel downLeft){
  this->rightUpWheel = rightUp;
  this->leftUpWheel = leftUp;
  this->leftDownWheel = downLeft;
  this->rightDownWheel = rightDown;
}

void Car::stop(){
  this->rightUpWheel.off_wheel();
  this->leftUpWheel.off_wheel();
  this->leftDownWheel.off_wheel();
  this->rightDownWheel.off_wheel();
}

void Car::goFront(){
  this->rightUpWheel.change_direction(CLOCKWISE);
  this->leftUpWheel.change_direction(CLOCKWISE);
  this->leftDownWheel.change_direction(CLOCKWISE);
  this->rightDownWheel.change_direction(CLOCKWISE);
}

void Car::goBack(){
  this->rightUpWheel.change_direction(COUNTER_CLOCKWISE);
  this->leftUpWheel.change_direction(COUNTER_CLOCKWISE);
  this->leftDownWheel.change_direction(COUNTER_CLOCKWISE);
  this->rightDownWheel.change_direction(COUNTER_CLOCKWISE);
}

void Car::goRight(){
  this->rightUpWheel.change_direction(COUNTER_CLOCKWISE);
  this->leftUpWheel.change_direction(CLOCKWISE);
  this->leftDownWheel.change_direction(COUNTER_CLOCKWISE);
  this->rightDownWheel.change_direction(CLOCKWISE);
}

void Car::goLeft(){
  this->rightUpWheel.change_direction(CLOCKWISE);
  this->leftUpWheel.change_direction(COUNTER_CLOCKWISE);
  this->leftDownWheel.change_direction(CLOCKWISE);
  this->rightDownWheel.change_direction(COUNTER_CLOCKWISE);
}
