#ifndef OUTOFBOX_H
#define OUTOFBOX_H

#include"Definitions.h"
#include"Infrared.h"
#include"Sonic.h"
#include"Car.h"

enum outOfBoxStates{
  outOfBoxState, firstLeftSearhState, onLeftCornerState
};
typedef enum outOfBoxStates outOfBoxStates;


class outOfBoxMachine{
  outOfBoxStates currentState = outOfBoxState;
  //cambio de estado s
  void execute();
  //estados
  outOfBoxStates outOfBox();
  outOfBoxStates firstSearchLeft();
};

#endif