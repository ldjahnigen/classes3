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
    Vehicle(std::string, int);
    std::string getManufacturer();
    void setManufacturer(std::string);
    int getYear();
    void setYear(int);
    void displayInfo();
};


#endif
