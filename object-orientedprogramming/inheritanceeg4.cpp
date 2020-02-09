#include <cassert>
#include <iostream>

// TODO: Declare Vehicle as the base class
class Vehicle {
public:
    int wheels;
    int seats;
    bool trunk;
    
};

// TODO: Derive Car from Vehicle
class Car:public Vehicle{};
// TODO: Derive Sedan from Car
class Sedan: public Car{};
// TODO: Update main to pass the tests
int main() {
  Sedan sedan;
  sedan.wheels=4;
  sedan.seats=4;
  sedan.trunk = true;
  assert(sedan.trunk == true);
  assert(sedan.seats == 4);
  assert(sedan.wheels == 4);
  std::cout << sedan.wheels << "\n" << sedan.seats << "\n" << sedan.trunk << "\n";
}