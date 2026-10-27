#ifndef DEFINITIONS_H
#define DEFINITIONS_H

/*  nomenclatura lantas
  4    1
  3    2
*/

/* nomenclatura infrarojos   
      7   8
    6      1
    5      2
      4   3

*/

// definiendo los pines de las ruedasb b  

#define WHEEL1L 4
#define WHEEL1R 5
#define WHEEL1SPEED 6
#define WHEEL2L 8
#define WHEEL2R 7 
#define WHEEL2SPEED 9
#define WHEEL3L 10
#define WHEEL3R 11
#define WHEEL3SPEED 16
#define WHEEL4L 13
#define WHEEL4R 14
#define WHEEL4SPEED 15

// definiendo los sensores de los ultrasonicos

#define SONIC_TRIGGER_FRONT 30
#define SONIC_TRIGGER_FRONT 30
#define SONIC_ECCO_FRONT 31
#define SONIC_ECCO_FRONT 31
#define SONIC_TRIGGER_BACK 32
#define SONIC_TRIGGER_BACK 32
#define SONIC_ECCO_BACK 33
#define SONIC_ECCO_BACK 33

// definiendo los pines de los infrarojos

#define LEFT_INFRA 42
#define RIGHT_INFRA 38
#define FRONT_INFRA 43
#define BACK_INFRA 39

#include"Wheel.h"
#include"Car.h"
#include"Sonic.h"
#include"Infrared.h"
#include"searchTreeMachine.h"

// inicializando ruedas

extern Wheel rightUpWheel;
extern Wheel rightDownWheel;
extern Wheel leftDownWheel;
extern Wheel leftUpWheel;

// inicializando carro

extern Car car;

// inicializando senrores ultrasonicos

extern Sonic frontSonic;
extern Sonic backSonic;

// inicializando sernosres infrarojos

extern Infrared frontInfrared;
extern Infrared backInfrared;
extern Infrared rightInfrared;
extern Infrared leftInfrared;

// global variables

#endif