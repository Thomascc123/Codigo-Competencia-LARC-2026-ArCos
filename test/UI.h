#ifndef UI_H
#define UI_H

#include"Wheel.h"
#include"Car.h"

enum Menus{
  initMenuOption, wheelsOptions, wheelstateOption, carMenuOption, infraRedMenuOption, sonicMenuOption
};
typedef enum Menus Menus;

class userInterface{
  Car car;
  Wheel wheelToModify;

  Menus currentOption = initMenu;
  int numInput = 0;
  // input
  String getStringInput();
  int getNumericInput();
  // output
  void initMenu();
  void carMenu();
  void wheelMenu();

  // transiciones
  void generalMenu();

  // accion
  void getSonicInfo();
   
};