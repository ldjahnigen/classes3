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
  // temporary variables to store input data
  std::string manufacturer;
  int year;
  int doors;
  int towCapacity;

  // get data for vehicle, use getline to account for spaces
  std::cout << "Vehicle\n";
  std::cout << "Enter the manufacturer: ";
  std::getline(std::cin, manufacturer);
  std::cout << "Enter the year: ";
  std::cin >> year;

  // construct object and display info
  Vehicle v = Vehicle(manufacturer, year);
  v.displayInfo();

  // get data for car, use ignore to clear input buffer
  std::cout << "\nCar\n";
  std::cout << "Enter the manufacturer: ";
  std::cin.ignore();
  std::getline(std::cin, manufacturer);
  std::cout << "Enter the year: ";
  std::cin >> year;
  std::cout << "Enter the number of doors: ";
  std::cin >> doors;

  // construct object and display info
  Car c = Car(manufacturer, year, doors);
  c.displayInfo();

  // get data for truck
  std::cout << "\nTruck\n";
  std::cout << "Enter the manufacturer: ";
  std::cin.ignore();
  std::getline(std::cin, manufacturer);
  std::cout << "Enter the year: ";
  std::cin >> year;
  std::cout << "Enter the tow capacity: ";
  std::cin >> towCapacity;

  // construct object and display info
  Truck t = Truck(manufacturer, year, towCapacity);
  t.displayInfo();

  return 0;
}
