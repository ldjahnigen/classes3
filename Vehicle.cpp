// Louis Jahnigen
// CIS 1202 501
// November 22, 2023

#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle(std::string manufacturer_, int year_) {
    manufacturer = manufacturer_;
    year = year_;
}

std::string Vehicle::getManufacturer() {
    return manufacturer;
}

void Vehicle::setManufacturer(std::string manufacturer_) {
    manufacturer = manufacturer_;
}

int Vehicle::getYear() {
    return year;
}

void Vehicle::setYear(int year_) {
    year = year_;
}

void Vehicle::displayInfo() {
    std::cout << "Vehicle information\n" 
              << "Manufacturer: " << manufacturer << '\n'
              << "Year: " << year << '\n';
}

