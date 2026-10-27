#include"outOfBoxMachine.h"
 
void outOfBoxMachine::execute(){
  switch(currentState){
    case outOfBoxState: 
      this->outOfBox();
      break;
    case firstLeftSearhState:
      this->firstSearchLeft();
      break;
    default:
      break;
  }
}

outOfBoxStates outOfBoxMachine::outOfBox(){
  car.goFront();
  if(backInfrared.getLine() == InLine){
    car.stop();
    return firstLeftSearhState;
  }
  return outOfBoxState;
}

outOfBoxStates outOfBoxMachine::firstSearchLeft(){
  car.goLeft();
  if(leftInfrared.getLine() == InLine){  
    car.stop();
    return onLeftCornerState;
  }
  return firstLeftSearhState;
}


