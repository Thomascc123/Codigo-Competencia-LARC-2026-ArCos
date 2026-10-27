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
Sonic backSonic(SONIC_TRIGGER_BACK, SONIC_ECCO_BACK);

// inicializando sernosres infrarojos

Infrared frontInfrared(FRONT_INFRA);
Infrared backInfrared(BACK_INFRA);
Infrared rightInfrared(RIGHT_INFRA);
Infrared leftInfrared(LEFT_INFRA);