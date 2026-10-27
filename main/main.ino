#include"Definitions.h"
#include"Wheel.h"
#include"Car.h"
#include"Sonic.h"
#include"Infrared.h"
#include"searchTreeMachine.h"

void setup() {
  Serial.begin(115200);

  //configurando los motores
  pinMode(WHEEL1L, OUTPUT);
  pinMode(WHEEL1R, OUTPUT);
  pinMode(WHEEL1SPEED, OUTPUT);
  pinMode(WHEEL2L, OUTPUT);
  pinMode(WHEEL2R, OUTPUT);
  pinMode(WHEEL2SPEED, OUTPUT);
  pinMode(WHEEL3L, OUTPUT);
  pinMode(WHEEL3R, OUTPUT);
  pinMode(WHEEL3SPEED, OUTPUT);
  pinMode(WHEEL4L, OUTPUT);
  pinMode(WHEEL4R, OUTPUT);
  pinMode(WHEEL4SPEED, OUTPUT);

  rightUpWheel.change_speed(255);
  leftUpWheel.change_speed(255);
  rightDownWheel.change_speed(255);
  leftDownWheel.change_speed(255);
  
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



  
  
  /*
  Serial.print("infrarojo frontal: ");
  Serial.println(digitalRead(FRONT_INFRA));
  Serial.print("infrarojo trasero: ");
  Serial.println(digitalRead(BACK_INFRA));
  Serial.print("infrarojo derecho: ");
  Serial.println(digitalRead(RIGHT_INFRA));
  Serial.print("infrarojo izquierdo: ");
  Serial.println(digitalRead(LEFT_INFRA));
  Serial.println();

  delay(500);
  */
}