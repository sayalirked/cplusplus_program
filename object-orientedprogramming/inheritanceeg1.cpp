#include <iostream>
#include <string>
using std::string;

class Vehicle {
public:
    int wheels = 0;
    string color = "blue";
    int drivewheels = 2;
    
    void Print() const
    {
        std::cout << "This " << color << " vehicle has " << wheels << " wheels!\n";
    }
};

class Car : public Vehicle {
public:
    bool sunroof = false;
};

class Bicycle : public Vehicle {
public:
    bool kickstand = true;
};

class Truck : public Vehicle {
public:
    bool lorry = true;
};

int main() 
{
    Car car;
    car.wheels = 4;
    car.sunroof = true;
    car.Print();
    if(car.sunroof)
        std::cout << "And a sunroof!\n";
    std::cout << "The car is " << car.drivewheels << " wheel drive.\n";
    // Inheritance example
    Truck truck;
    if(truck.lorry) 
        std::cout << "Now it is a lorry!\n";
    truck.wheels = 8;
    truck.Print();
};