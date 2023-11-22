// Louis Jahnigen
// CIS 1202 501
// November 22, 2023


#ifndef TRUCK_H
#define TRUCK_H

class Truck : public Vehicle {
  private:
    int towCapacity;
  public:
    Truck(std::string, int, int);
    int getTowCapacity();
    void setTowCapacity(int);
    void displayInfo();

};


#endif
