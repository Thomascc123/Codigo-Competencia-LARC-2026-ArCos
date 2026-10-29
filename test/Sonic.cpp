#include"Sonic.h"

float Sonic::getDistance(){
  digitalWrite(this->trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(this->trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(this->trigger, LOW);

  long duration = pulseIn(this->ecco, HIGH, 30000);
  
  if (duration <= 0){
    return -1;
  };

  float distance = duration * 0.0343 / 2.0;
  return distance;
}