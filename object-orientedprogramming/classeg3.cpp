#include <assert.h>
#include <string>

// TODO: Define class Person
  // TODO: Define a public constructor with an initialization list
  // TODO: Define a public member variable: name
class Person{
  public:
    Person(std::string name) : name(name) {};
    std::string name;
};

//OR
//struct Person{
//    Person(std::string name) : name(name) {};
//    std::string name;
//};

//OR
/*
class Person {
public:
  // TODO: Add an initialization list
  Person(std::string const & name) : name(name) { // using reference to const variable
//      Person::name = name;
  }
  std::string const name; //when using const variable 
};
*/

// Test
int main() {
  Person alice("Alice");
  Person bob("Bob");
  assert(alice.name != bob.name);
}