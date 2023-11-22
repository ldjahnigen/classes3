// Louis Jahnigen
// CIS 1202 501
// November 22, 2023

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
  private:
    int towCapacity;
  public:
    Truck(std::string manufacturer_, int year_, int towCapacity_);
    int getTowCapacity();
    void setTowCapacity(int towCapacity_);
    void displayInfo();
};


#endif
