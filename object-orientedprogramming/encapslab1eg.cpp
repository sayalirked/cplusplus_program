#include <cassert>
#include <stdexcept>
#include <string>

// TODO: Define "Student" class
class Student {
 public:
  // constructor
    Student(std::string name, int grade, float gpa) : name_(name), grade_(grade), gpa_(gpa) {
        Validate();
    }
  // accessors
  std::string Name() const {return name_;}
  int Grade() const {return grade_;}
  float GPA() const {return gpa_;}
  // mutators
  void Name(std::string name) {
      name_ = name;
      Validate();}
  void Grade(int grade) {
      grade_ = grade;
      Validate();}
  void GPA(float gpa) {
      gpa_ = gpa;
      Validate();}

 private:
  // name
  std::string name_;
  // grade
  int grade_;
  // GPA
  float gpa_;
  void Validate() {
     if(Grade() < 0 || Grade() > 12 || GPA() < 0.0 || GPA() > 4.0)
         throw std::invalid_argument("argument out of bounds");
  }
};

// TODO: Test
int main() {
    Student student("Bob", 2, 3.5);
    assert(student.Name() == "Bob");
    assert(student.Grade() == 2);
    assert(student.GPA() == 3.5);
    bool myexception{false};
    try{
        student.Grade(-100);
    }
    catch(...){
        myexception = true;
    }
    assert(myexception);
}