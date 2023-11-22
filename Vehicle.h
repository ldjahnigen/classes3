// Louis Jahnigen
// CIS 1202 501
// November 22, 2023


#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
  private:
    std::string manufacturer;
    int year;
  public:
    Vehicle(std::string manufacturer_, int year_);
    std::string getManufacturer();
    void setManufacturer(std::string manufacturer_);
    int getYear();
    void setYear(int year_);
    void displayInfo();
};


#endif
