#include <cassert>
#include <cmath>
#include <stdexcept>

// TODO: Define class Sphere
class Sphere {
 public:
  // Constructor
  Sphere(int rad): rad_(rad), vol_(pi_ * rad * rad * rad * 4/3) { 
      if(rad < 0.0)
         throw std::invalid_argument("argument is invalid");
   }
  // Accessors
  int Radius() const {return rad_;}
  float Volume() const {return vol_;}

 private:
  // Private members
  float const pi_{3.14159};
  int const rad_;
  float const vol_;
};

// Test
int main(void) {
  Sphere sphere(5);
  assert(sphere.Radius() == 5);
  assert(abs(sphere.Volume() - 523.6) < 1);
}