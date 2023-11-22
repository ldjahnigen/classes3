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

  std::cout << "Vehicle\n";
  std::cout << "Enter the manufacturer: ";
  std::getline(std::cin, manufacturer);
  std::cout << "Enter the year: ";
  std::cin >> year;

  Vehicle v = Vehicle(manufacturer, year);
  v.displayInfo();

  std::cout << "\nCar\n";
  std::cout << "Enter the manufacturer: ";
  std::cin.ignore();
  std::getline(std::cin, manufacturer);
  std::cout << "Enter the year: ";
  std::cin >> year;
  std::cout << "Enter the number of doors: ";
  std::cin >> doors;

  Car c = Car(manufacturer, year, doors);
  c.displayInfo();

  std::cout << "\nTruck\n";
  std::cout << "Enter the manufacturer: ";
  std::cin.ignore();
  std::getline(std::cin, manufacturer);
  std::cout << "Enter the year: ";
  std::cin >> year;
  std::cout << "Enter the tow capacity: ";
  std::cin >> towCapacity;

  Truck t = Truck(manufacturer, year, towCapacity);
  t.displayInfo();

  return 0;
}
