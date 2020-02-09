#include <cassert>
#include <iostream>

// TODO: Define public accessors and mutators for the private member variables
struct Date {
 public:
  int Day() {return day;}
  void Day(int d) {day = d;}
  int Month() {return month;}
  void Month(int m) {month = m;}
  int Year() {return year;}
  void Year(int y) {year = y;}
 private:
  int day{1};
  int month{1};
  int year{0};
};

int main() {
  Date date;
  date.Day(29);
  date.Month(8);
  date.Year(1981);
  assert(date.Day() == 29);
  assert(date.Month() == 8);
  assert(date.Year() == 1981);
  std::cout << date.Day() << "/" << date.Month() << "/" << date.Year() << "\n";
}