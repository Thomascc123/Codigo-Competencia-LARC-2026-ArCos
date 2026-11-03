#include "Definitions.h"

// inicializando ruedas

Wheel rightUpWheel(WHEEL1R, WHEEL1L, WHEEL1SPEED); //1
Wheel rightDownWheel(WHEEL2R, WHEEL2L, WHEEL2SPEED); //2
Wheel leftDownWheel(WHEEL4R, WHEEL4L, WHEEL4SPEED); //4
Wheel leftUpWheel(WHEEL3R, WHEEL3L, WHEEL3SPEED); //3

// inicializando carro

Car car(rightUpWheel, leftUpWheel, rightDownWheel, leftDownWheel);

// inicializando senrores ultrasonicos

Sonic frontSonic(SONIC_TRIGGER_FRONT, SONIC_ECCO_FRONT);
//Sonic rightSonic(SONIC_TRIGGER_FRONT, SONIC_ECCO_FRONT);
//Sonic leftSonic(SONIC_TRIGGER_FRONT, SONIC_ECCO_FRONT);

// inicializando sernosres infrarojos

Infrared frontInfrared1(FRONT_INFRA_1);
Infrared frontInfrared2(FRONT_INFRA_2);
Infrared backInfrared1(BACK_INFRA_1);
Infrared backInfrared2(BACK_INFRA_2);
Infrared rightInfrared1(RIGHT_INFRA_1);
Infrared rightInfrared2(RIGHT_INFRA_2);
Infrared leftInfrared1(LEFT_INFRA_1);
Infrared leftInfrared2(LEFT_INFRA_2);

// inicializando brazo

ArmStepper armStepper(2048, IN_1_ARM, IN_2_ARM, IN_3_ARM, IN_4_ARM, 20);
Arm arm(&armStepper, ARM_SERVO_PIN, CLAW_PIN);