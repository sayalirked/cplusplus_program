#include <cassert>
#include <iostream>
using std::cout;

class Date {
 public:
  Date(int d, int m, int y){ //constructor
      Day(d); //calling mutators
      Month(m);
      Year(y);
  }
  int Day() { return day; }
  void Day(int d) {
    if (d >= 1 && d <= 31) day = d;
  }
  int Month() { return month; }
  void Month(int m) {
    if (m >= 1 && m <= 12) month = m;
  }
  int Year() { return year; }
  void Year(int y) { year = y; }

 private:
  int day{1};
  int month{1};
  int year{0};
};

// Test in main
int main() {
  Date date(8,2,1981);
  assert(date.Day() == 8);
  assert(date.Month() == 2);
  assert(date.Year() == 1981);
  cout << date.Day() << "/" << date.Month() << "/" << date.Year() << "\n";
}