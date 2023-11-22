// Louis Jahnigen
// CIS 1202 501
// November 22, 2023

#include "Truck.h"

Truck::Truck(std::string manufacturer_, int year_, int towCapacity_) {
  manufacturer = manufacturer_;
  year = year_;
  towCapacity = towCapacity_;
}


int getTowCapacity() {
  return towCapacity;
}


void setTowCapacity(int towCapacity_) {
  towCapacity = towCapacity_;
}


void displayInfo() {
  Vehicle::displayInfo();
  std::cout << "Tow Capacity: " << towCapacity << '\n';
}
