#include <iostream>
using std::cout;

// Passing by value
int MultiplybyTwo(int i){
    i=2*i;
    return i;
}
// Passing by reference
int MultiplybyTwo_ref(int &i){
    i=2*i;
    return i;

}

int main(){
    int a=5;
    cout << "The value of a is " << a << "\n";
    int b = MultiplybyTwo_ref(a);
    cout << "The value of b is " << b << "\n";
    cout << "The value of a is now equal to " << a << "\n";
}