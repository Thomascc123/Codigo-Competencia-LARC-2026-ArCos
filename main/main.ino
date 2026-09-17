  /*
  1    2
  3    4
*/
#define RIGHTUP 2
#define LEFTUP 1
#define RIGHTDOWN 4
#define LEFTDOWN 3

#define WHEEL1L 5
#define WHEEL1R 4
#define WHEEL2L 3
#define WHEEL2R 2
#define WHEEL3L 6
#define WHEEL3R 7
#define WHEEL4L 8
#define WHEEL4R 9

#include"Wheel.h"
#include"Car.h"

Wheel rightUpWheel(WHEEL2R, WHEEL2L);
Wheel leftUpWheel(WHEEL1R, WHEEL1L);
Wheel rightDownWheel(WHEEL4R, WHEEL4L);
Wheel leftDownWheel(WHEEL3R, WHEEL3L);

Car car(rightUpWheel, leftUpWheel, rightDownWheel, leftDownWheel);

int routeWait = 10*1000; //1 minuto

void setup() {
  Serial.begin(115200);
  pinMode(WHEEL1L, OUTPUT);
  pinMode(WHEEL1R, OUTPUT);
  pinMode(WHEEL2L, OUTPUT);
  pinMode(WHEEL2R, OUTPUT);
  pinMode(WHEEL3L, OUTPUT);
  pinMode(WHEEL3R, OUTPUT);
  pinMode(WHEEL4L, OUTPUT);
  pinMode(WHEEL4R, OUTPUT);
}

void loop(){
  delay(10000);
  squareRoute();
  delay(routeWait);
}

void squareRoute(){
  car.stop();
  delay(1000);

  car.goRight();
  delay(2000);

  car.stop();
  delay(100);

  car.goBack();
  delay(2000);

  car.stop();
  delay(100);

  car.goLeft();
  delay(2000);

  car.stop();
  delay(100);

  car.goFront();
  delay(2000);
  car.stop();
}
