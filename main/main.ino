#include"Definitions.h"
#include"Wheel.h"
#include"Car.h"
#include"Sonic.h"
#include"Infrared.h"
#include"searchTreeMachine.h"
#include"outOfBoxMachine.h"

outOfBoxMachine outOfBoxMachine;
searchTreeMachine searchTreeMachine;

bool firstTime = true;

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

  rightUpWheel.change_speed(180);
  leftUpWheel.change_speed(180);
  rightDownWheel.change_speed(180);
  leftDownWheel.change_speed(180);
  
  //configurando los sensores sonicos
  pinMode(SONIC_TRIGGER_FRONT, OUTPUT);
  pinMode(SONIC_ECCO_FRONT, INPUT);

  //configurando los infrarojos
  pinMode(FRONT_INFRA_1, INPUT);
  pinMode(FRONT_INFRA_2, INPUT);
  pinMode(BACK_INFRA_1, INPUT);
  pinMode(BACK_INFRA_2, INPUT);
  pinMode(RIGHT_INFRA_1, INPUT);
  pinMode(RIGHT_INFRA_2, INPUT);
  pinMode(LEFT_INFRA_1, INPUT);
  pinMode(LEFT_INFRA_2, INPUT);
}

void loop(){


  
  if(Serial.available()){
    int steps = Serial.parseInt();
    Serial.read();
    Serial.println(steps);
    if(steps == 1){
      arm.takeBall();
    }else if(steps == 2){
      Serial.println("derecha");
      arm.storeRight();
    }else if(steps == 3){
      arm.storeLeft();
    }
    //myStepper.step(steps);
    delay(1000);
  }
  
  /*
  if(firstTime == true){
    searchTreeMachine.currentState = goFrontPoolsState;
    firstTime = false;
    delay(5000);
  }*/
  //searchTreeMachine.execute();
  /*
  if(outOfBoxMachine.currentState != onLeftCornerState){
    outOfBoxMachine.execute();
  }else{
    searchTreeMachine.execute();
  }*/
  //Serial.println(searchTreeMachine.currentState);
  //Serial.println(outOfBoxMachine.currentState);
  //delay(500);
  
    //Serial.println("\ncccccccccccc\ncambia de estado\nccccccccc\n");
  
  //Serial.println(frontSonic.getDistance());
  //delay(100);
  
  /*
  delay(4000);
  car.goFront();
  delay(3000);
  car.stop();
  delay(1000);

  car.goBack();
  delay(3000);
  car.stop();
  delay(1000);
  */
  
  /*
  delay(3000);
  rightUpWheel.change_direction(CLOCKWISE);
  delay(2000);
  rightUpWheel.off_wheel();
  delay(2000);
  rightUpWheel.change_direction(COUNTER_CLOCKWISE);
  delay(2000);
  rightUpWheel.off_wheel();
  delay(3000);

  delay(3000);
  leftUpWheel.change_direction(CLOCKWISE);
  delay(2000);
  leftUpWheel.off_wheel();
  delay(2000);
  leftUpWheel.change_direction(COUNTER_CLOCKWISE);
  delay(2000);
  leftUpWheel.off_wheel();
  delay(3000);

  delay(3000);
  rightDownWheel.change_direction(CLOCKWISE);
  delay(2000);
  rightDownWheel.off_wheel();
  delay(2000);
  rightDownWheel.change_direction(COUNTER_CLOCKWISE);
  delay(2000);
  rightDownWheel.off_wheel();
  delay(3000);

  delay(3000);
  leftDownWheel.change_direction(CLOCKWISE);
  delay(2000);
  leftDownWheel.off_wheel();
  delay(2000);
  leftDownWheel.change_direction(COUNTER_CLOCKWISE);
  delay(2000);
  leftDownWheel.off_wheel();
  delay(3000);
  */
  
  
  /*
  Serial.print("infrarojo frontal 1: ");
  Serial.println(digitalRead(FRONT_INFRA_1));
  Serial.print("infrarojo frontal 2: ");
  Serial.println(digitalRead(FRONT_INFRA_2));
  Serial.print("infrarojo trasero 1: ");
  Serial.println(digitalRead(BACK_INFRA_1));
  Serial.print("infrarojo trasero 2: ");
  Serial.println(digitalRead(BACK_INFRA_2));
  Serial.print("infrarojo derecho 1: ");
  Serial.println(digitalRead(RIGHT_INFRA_1));
  Serial.print("infrarojo derecho 2: ");
  Serial.println(digitalRead(RIGHT_INFRA_2));
  Serial.print("infrarojo izquierdo 1: ");
  Serial.println(digitalRead(LEFT_INFRA_1));
  Serial.print("infrarojo izquierdo 2: ");
  Serial.println(digitalRead(LEFT_INFRA_2));
  Serial.println();
  delay(1000);
  */
  
}