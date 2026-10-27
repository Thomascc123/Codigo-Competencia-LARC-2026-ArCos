#include"searchTreeMachine.h"

searchTreeStates searchTreeMachine::goFrontPools(){
  car.goRight();
  if(frontSonic.getDistance() <= 6){
    car.stop();
    return surroundPoolState;
  }
  return goFrontPoolsState;
}

searchTreeStates searchTreeMachine::surroundPool(){
  car.goRight();
  if(frontSonic.getDistance() <= 6){
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

  if(frontSonic.getDistance() <= 6){
    return surroundPoolState;
  }
  return goFrontTreesState;
}

searchTreeStates searchTreeMachine::goFrontTrees(){
  car.goFront();
  if(frontInfrared.getLine() == InLine){
    return goLeftTreesState;
  }
  return goFrontTreesState;
}

searchTreeStates searchTreeMachine::goLeftTrees(){
  car.goLeft();
  if(leftInfrared.getLine() == InLine){
    car.stop();
    return onTreesState;
  }
  return goLeftTreesState;
}

void searchTreeMachine::execute(){
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
      this->currentState = this->goRightPools(300);
      break; 
    
    case goFrontTreesState:
      this->currentState = this->goFrontTrees();
      break;
    
    case goLeftTreesState:
      this->currentState = this->goLeftTrees();
      break;

    case onTreesState:
      break;

    default:
      break;
  }
}