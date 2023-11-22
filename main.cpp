// Louis Jahnigen
// CIS 1202 501
// November 22, 2023

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Truck.cpp"


int main() {
  std::string manufacturer;
  int year;
  int doors;
  int towCapacity;

  manufacturer = "Ford";
  year = 1;
  doors = 10;
  towCapacity = 2000;
  Vehicle v = Vehicle(manufacturer, year);
  v.displayInfo();
  Car c = Car(manufacturer, year, doors);
  c.displayInfo();
  Truck t = Truck(manufacturer, year, towCapacity);
  t.displayInfo();

  return 0;
}
