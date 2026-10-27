#ifndef SEARCHTREESTATE_H
#define SEARCHTREESTATE_H

#include"Definitions.h"
#include"Infrared.h"
#include"Sonic.h"
#include"Car.h"

enum searchTreeStates{
  goFrontPoolsState, surroundPoolState, goRightPoolsState, goFrontTreesState, goLeftTreesState, onTreesState
};

typedef enum searchTreeStates searchTreeStates;

class searchTreeMachine{
  searchTreeStates currentState = goFrontPoolsState;
  unsigned long surroundPoolTime = 0;
  bool fisrtTimeSurroundPools;

  void execute();

  searchTreeStates goFrontPools();
  searchTreeStates surroundPool();
  searchTreeStates goRightPools(int time);
  searchTreeStates goFrontTrees();
  searchTreeStates goLeftTrees();
};

#endif