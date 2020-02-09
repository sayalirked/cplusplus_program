#include <iostream>
#include <string>
using std::string;
using std::cout;

class Car {
  public:
    void PrintCarData() 
    {
        cout << "The distance that the " << color << " car " << number << " has traveled is: " << distance << "\n";
    }

    void IncrementDistance() 
    {
        distance++;
    }
    
    // Adding a constructor here:
    Car(string c, int n, int d) : color(c), number(n), distance(d)
    {}
    
    string color;
    int distance=0;
    int number;
};

int main() 
{
    // Create class instances for each car.
    Car car_1 = Car("green", 1, 100);
    Car car_2 = Car("red", 2, 200);
    Car car_3 = Car("blue", 3, 300);

    // Increment car_1's position by 1.
    car_1.IncrementDistance();

    // Print out the position and color of each car.
    car_1.PrintCarData();
    car_2.PrintCarData();
    car_3.PrintCarData();
}