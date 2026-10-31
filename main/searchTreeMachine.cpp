#include"searchTreeMachine.h"

searchTreeStates searchTreeMachine::goFrontPools(){
  car.goFront();
  if(frontSonic.getDistance() <= 8){
    car.stop();
    return surroundPoolState;
  }
  if(frontInfrared1.getLine() == InLine && frontInfrared2.getLine() == InLine){
    car.stop();
    return onTreesState;
  }
  return goFrontPoolsState;
}

searchTreeStates searchTreeMachine::surroundPool(){
  car.goRight();
  if(frontSonic.getDistance() <= 8){
    car.goRight();
    return surroundPoolState;
  }
  return goRightPoolsState;
}

searchTreeStates searchTreeMachine::goRightPools(int time){
  unsigned long currentTime = millis();
  car.goRight();
  if(currentTime - this->surroundPoolTime <= time){
    return goRightPoolsState;
  }

  this->fisrtTimeSurroundPools = true;

  if(frontSonic.getDistance() <= 8){
    return surroundPoolState;
  }
  return goFrontTreesState;
}

searchTreeStates searchTreeMachine::goFrontTrees(){
  car.goFront();
  if(frontInfrared1.getLine() == InLine && frontInfrared2.getLine() == InLine){
    return goLeftTreesState;
  }
  return goFrontTreesState;
}

searchTreeStates searchTreeMachine::goLeftTrees(){
  car.goLeft();
  if(leftInfrared1.getLine() == InLine && leftInfrared2.getLine() == InLine){
    car.stop();
    return onTreesState;
  }
  return goLeftTreesState;
}

void searchTreeMachine::execute(){
  //Serial.println("ejecutando");
  //Serial.println(this->currentState);
  switch(this->currentState){
    case goFrontPoolsState:
      this->currentState = this->goFrontPools();
      break;

    case surroundPoolState:
      this->currentState = this->surroundPool();
      break;
    
    case goRightPoolsState:
      if(this->fisrtTimeSurroundPools == true){
        this->surroundPoolTime = millis();
        this->fisrtTimeSurroundPools = false;
      }
      this->currentState = this->goRightPools(500);
      break; 
    
    case goFrontTreesState:
      this->currentState = this->goFrontTrees();
      break;
    
    case goLeftTreesState:
      this->currentState = this->goLeftTrees();
      break;

    case onTreesState:
      delay(1000);
      break;

    default:
      break;
  }
}