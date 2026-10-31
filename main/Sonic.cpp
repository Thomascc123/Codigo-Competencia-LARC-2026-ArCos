#include"Sonic.h"

float Sonic::getDistance(){
  float distances[7];
  for(int i=0; i<7; i++){
    distances[i] = this->getUnitDistance();
  }
  return (distances[0] + distances[1] + distances[2] + distances[3] + distances[4] + distances[5] + distances[6])/7;
}

float Sonic::getUnitDistance(){
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