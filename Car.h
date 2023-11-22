// Louis Jahnigen
// CIS 1202 501
// November 22, 2023

#include "Vehicle.h"
#include "Vehicle.cpp"

#ifndef CAR_H
#define CAR_H

class Car : public Vehicle {
  private:
    int doors;
  public:
    Car(std::string, int, int);
    int getDoors();
    void setDoors(int);
    void displayInfo();
};


#endif



