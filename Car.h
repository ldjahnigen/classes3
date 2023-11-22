// Louis Jahnigen
// CIS 1202 501
// November 22, 2023

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
  private:
    int doors;
  public:
    Car(std::string manufacturer_, int year_, int doors_);
    int getDoors();
    void setDoors(int doors_);
    void displayInfo();
};


#endif



