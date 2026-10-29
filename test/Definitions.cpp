#include "Definitions.h"

// inicializando ruedas

Wheel rightUpWheel(WHEEL1R, WHEEL1L, WHEEL1SPEED);
Wheel rightDownWheel(WHEEL2R, WHEEL2L, WHEEL2SPEED);
Wheel leftDownWheel(WHEEL3R, WHEEL3L, WHEEL3SPEED);
Wheel leftUpWheel(WHEEL4R, WHEEL4L, WHEEL4SPEED);

// inicializando carro

Car car(rightUpWheel, leftUpWheel, rightDownWheel, leftDownWheel);

// inicializando senrores ultrasonicos

Sonic frontSonic(SONIC_TRIGGER_FRONT, SONIC_ECCO_FRONT);
//Sonic backSonic(SONIC_TRIGGER_BACK, SONIC_ECCO_BACK);

// inicializando sernosres infrarojos

Infrared frontInfrared1(FRONT_INFRA_1);
Infrared frontInfrared2(FRONT_INFRA_2);
Infrared backInfrared1(BACK_INFRA_1);
Infrared backInfrared2(BACK_INFRA_2);
Infrared rightInfrared1(RIGHT_INFRA_1);
Infrared rightInfrared2(RIGHT_INFRA_2);
Infrared leftInfrared1(LEFT_INFRA_1);
Infrared leftInfrared2(LEFT_INFRA_2);