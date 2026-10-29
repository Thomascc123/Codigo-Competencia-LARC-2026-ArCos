#ifndef DEFINITIONS_H
#define DEFINITIONS_H

/*  nomenclatura lantas
  2    4
  1    3
*/

/* nomenclatura de los puntes h
  2	1
*/

/* nomenclatura infrarojos
      7   8
    6      1
    5      2
      4   3

*/

// definiendo los pines de las ruedas

#define WHEEL1L 22
#define WHEEL1R 24
#define WHEEL1SPEED 2
#define WHEEL2L 26
#define WHEEL2R 28
#define WHEEL2SPEED 3
#define WHEEL3L 30
#define WHEEL3R 32
#define WHEEL3SPEED 4
#define WHEEL4L 34
#define WHEEL4R 36
#define WHEEL4SPEED 5

// definiendo los sensores de los ultrasonicos

#define SONIC_TRIGGER_FRONT 23
#define SONIC_ECCO_FRONT 25
#define SONIC_TRIGGER_RIGHT 27
#define SONIC_ECCO_RIGHT 29
#define SONIC_TRIGGER_LEFT 31
#define SONIC_ECCO_LEFT 33

// definiendo los pines de los infrarojos

#define FRONT_INFRA_1 45 // 
#define FRONT_INFRA_2 39 // 
#define RIGHT_INFRA_1 35 // 
#define RIGHT_INFRA_2 41 // bie
#define LEFT_INFRA_1 43  // 
#define LEFT_INFRA_2 49  //
#define BACK_INFRA_1 47 // bien
#define BACK_INFRA_2 37 // 

// definiendo los pines de los encoders

#define ENCODER1_FASE_A 62
#define ENCODER1_FASE_B 63
#define ENCODER2_FASE_A 64
#define ENCODER2_FASE_B 65
#define ENCODER3_FASE_A 14
#define ENCODER3_FASE_B 15
#define ENCODER4_FASE_A 16
#define ENCODER4_FASE_B 17

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
extern Sonic rightSonic;
extern Sonic leftSonic;

// inicializando sernosres infrarojos

extern Infrared frontInfrared1;
extern Infrared frontInfrared2;
extern Infrared backInfrared1;
extern Infrared backInfrared2;
extern Infrared rightInfrared1;
extern Infrared rightInfrared2;
extern Infrared leftInfrared1;
extern Infrared leftInfrared2;

// global variables

#endif
