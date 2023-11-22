// Louis Jahnigen
// CIS 1202 501
// November 22, 2023

#include <iostream>
#include "Truck.h"

Truck::Truck(std::string manufacturer_, int year_, int towCapacity_) 
: Vehicle(manufacturer_, year_), towCapacity(towCapacity_) {
  towCapacity = towCapacity_;
}


int Truck::getTowCapacity() {
  return towCapacity;
}


void Truck::setTowCapacity(int towCapacity_) {
  towCapacity = towCapacity_;
}


void Truck::displayInfo() {
  Vehicle::displayInfo();
  std::cout << "Tow Capacity: " << towCapacity << '\n';
}
