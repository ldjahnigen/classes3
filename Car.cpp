// Louis Jahnigen
// CIS 1202 501
// November 22, 2023

#include <iostream>
#include "Car.h"

Car::Car(std::string manufacturer_, int year_, int doors_)
: Vehicle(manufacturer_, year_), doors(doors_) {
  doors = doors_;
}


int Car::getDoors() {
  return doors;
}


void Car::setDoors(int doors_) {
  doors = doors_;
}


void Car::displayInfo() {
  Vehicle::displayInfo();
  std::cout << "Doors: " << doors << '\n';
}
