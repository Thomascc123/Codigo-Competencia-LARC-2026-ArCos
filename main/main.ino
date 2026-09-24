  /*
  1    2
  3    4
*/
#define RIGHTUP 2
#define LEFTUP 1
#define RIGHTDOWN 4
#define LEFTDOWN 3

// definiendo los pines de las ruedas

#define WHEEL1L 5
#define WHEEL1R 4
#define WHEEL2L 56
#define WHEEL2R 57
#define WHEEL3L 6
#define WHEEL3R 7
#define WHEEL4L 55
#define WHEEL4R 54

// definiendo los sensores de los ultrasonicos

#define SONIC_TRIGGER_FRONT 30
#define SONIC_ECCO_FRONT 31
#define SONIC_TRIGGER_BACK 32
#define SONIC_ECCO_BACK 33

// definiendo los pines de los infrarojos

#define LEFT_INFRA 10
#define RIGHT_INFRA 11
#define FRONT_INFRA 12
#define BACK_INFRA 13

#include"Wheel.h"
#include"Car.h"
#include"Sonic.h"
#include"Infrared.h"

// inicializando ruedas

Wheel rightUpWheel(WHEEL2R, WHEEL2L);
Wheel leftUpWheel(WHEEL1R, WHEEL1L);
Wheel rightDownWheel(WHEEL4R, WHEEL4L);
Wheel leftDownWheel(WHEEL3R, WHEEL3L);

// inicializando carro

Car car(rightUpWheel, leftUpWheel, rightDownWheel, leftDownWheel);

// inicializando senrores ultrasonicos

Sonic frontSonic(SONIC_TRIGGER_FRONT, SONIC_ECCO_FRONT);
Sonic backSonic(SONIC_TRIGGER_BACK, SONIC_ECCO_BACK);

// inicializando sernosres infrarojos

Infrared frontInfrared(FRONT_INFRA);
Infrared backInfrared(BACK_INFRA);
Infrared rightInfrared(RIGHT_INFRA);
Infrared leftInfrared(LEFT_INFRA);

void setup() {
  Serial.begin(115200);

  //configurando los motores
  pinMode(WHEEL1L, OUTPUT);
  pinMode(WHEEL1R, OUTPUT);
  pinMode(WHEEL2L, OUTPUT);
  pinMode(WHEEL2R, OUTPUT);
  pinMode(WHEEL3L, OUTPUT);
  pinMode(WHEEL3R, OUTPUT);
  pinMode(WHEEL4L, OUTPUT);
  pinMode(WHEEL4R, OUTPUT);

  //configurando los sensores sonicos
  pinMode(SONIC_TRIGGER_FRONT, OUTPUT);
  pinMode(SONIC_ECCO_FRONT, INPUT);
  pinMode(SONIC_TRIGGER_BACK, OUTPUT);
  pinMode(SONIC_ECCO_BACK, INPUT);

  //configurando los infrarojos
  pinMode(FRONT_INFRA, INPUT);
  pinMode(BACK_INFRA, INPUT);
  pinMode(RIGHT_INFRA, INPUT);
  pinMode(LEFT_INFRA, INPUT);
}

void loop(){
  delay(10000);
}

bool outOfBox(){
  car->goFront();
  if(backInfrared.getLine() == InLine){
    car->stop();
  }
}

