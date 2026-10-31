#include"outOfBoxMachine.h"
 
void outOfBoxMachine::execute(){
  switch(this->currentState){
    case outOfBoxState: 
      this->currentState = this->outOfBox();
      break;
    case firstLeftSearhState:
      this->currentState = this->firstSearchLeft();
      break;
    case onLeftCornerState:
      Serial.println("hola");
      delay(1000);
      break;
    default:
      break;
  }
}

outOfBoxStates outOfBoxMachine::outOfBox(){
  car.goFront();
  if(backInfrared1.getLine() == InLine){
    car.stop();
    return firstLeftSearhState;
  }
  return outOfBoxState;
}

outOfBoxStates outOfBoxMachine::firstSearchLeft(){
  car.goLeft();
  if(leftInfrared1.getLine() == InLine && leftInfrared2.getLine() == InLine){  
    car.stop();
    return onLeftCornerState;
  }
  return firstLeftSearhState;
}


