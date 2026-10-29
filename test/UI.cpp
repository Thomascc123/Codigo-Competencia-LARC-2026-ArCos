#include"UI.h"

void userInterface::initMenu(){
  Serial.println("[1] motores");
  Serial.println("[2] llantas");
  Serial.println("[3] infrarojos");
  Serial.println("[4] ultrasonicos");
  Serial.println("[5] maquina de estados");
}

void userInterface::carMenu(){
  Serial.println("[0] Salir");
  Serial.println("[1] al frente");
  Serial.println("[2] a la izquierda");
  Serial.println("[3] atras");
  Serial.println("[4] a la derecha");
  Serial.println("[5] frenar");
}

void userInterface::wheelMenu(){
  Serial.println("[0] Salir");
  Serial.println("[1] llanta 1");
  Serial.println("[2] llanta 2");
  Serial.println("[3] llanta 3");
  Serial.println("[4] llanta 4");
}

void userInterface::wheelState(){
  Serial.println("[0] Salir");
  Serial.println("[1] detener");
  Serial.println("[2] girar en sentido horario");
  Serial.println("[3] girar en sentido antihorario");
  Serial.println("[4] cambiar velocidad");
  Serial.println("[5] volver a seleccionar llantas");
}

void userInterface::getSonicInfo(){
  Serial.print("la distancia acutal es: ");
  float distance = frontSonic.getDistance();
  Serial.print(distance);
}

void userInterface::carSelection(){
  switch(this->numInput){
    case 0:
      this->currentOption = initMenuOption;
      this->initMenu();
      break;
    case 1:
      car.goFront();
      this->carMenu();
      break;
    case 2:
      car.goLeft();
      this->carMenu();
      break;
    case 3:
      car.goBack();
      this->carMenu();
      break;
    case 4:
      car.goRight();
      this->carMenu();
      break;
    case 5:
      car.stop();
      this->carMenu();
      break;
    default:
      Serial.print("ingrese un valor valido\n");
      break;
  }
}

void userInterface::wheelSelection(){
  switch(this->numInput){
    case 0:
      this->currentOption = initMenuOption;
      this->initMenu();
      break;
    case 1:
      this->wheelToModify = ;
      this->currentOption = wheelstateOption;
      this->wheelState();
      break;
    case 2:
      this->wheelToModify = ;
      this->currentOption = wheelstateOption;
      this->wheelState();
      break;
    case 3:
      this->wheelToModify = ;
      this->currentOption = wheelstateOption;
      this->wheelState();
      break;
    case 4:
      this->wheelToModify = kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk;
      this->currentOption = wheelstateOption;
      this->wheelState();
      break;
    default:
      Serial.print("ingrese un valor valido\n");
      this->wheelsOptions();
      break;
  }
}

void userInterface::wheelStateSelection(){
  switch(this->numInput){
    case 0:
      this->currentOption = initMenuOption;
      this->initMenu();
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    default:
      Serial.print("ingrese un valor valido\n");
      this->wheelsOptions();
      break;
  }
}

void userInterface::generalSelection(){
  switch(numbuffer){
      case initMenuOption:
        this->initMenu();
        break;
      case carMenuOption:
        this->carMenu();
        break;
      case wheelsOptions:
        this->initMenu();
        break;
      case infraRedMenuOption:
        break;
      case sonicMenuOption:
        this->getSonicInfo();
        break;
    }
}
