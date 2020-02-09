#include <iostream>
#include <string>
using std::string;

// Define base class Animal
class Animal{
  public:
    string color;
    string name;
    int age;
};
// Declare derived class Snake
class Snake : public Animal {
public:
    float length;
    void MakeSound() { std::cout << "Hiss!\n"; };
};
// Declare derived class Cat
class Cat : public Animal {
public:
    float height;
    void MakeSound() { std::cout << "Meow!\n"; };
};
// Test in main()
int main(){
    Snake snake;
    Cat cat;
    snake.length = 2.1;
    snake.MakeSound();
    cat.height = 3.5;
    cat.name="Lucy";
    cat.color = "white";
    cat.MakeSound();
    std::cout << cat.color << "\n" << cat.name << "\n";
    
}