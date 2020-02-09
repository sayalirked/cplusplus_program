#include <iostream>
using std::cout;

int main(){
    int i=5;
    int* pointer_to_i = &i;
    cout << "the variable i is " << i << "the address of i is " << &i << "\n";
    cout << "the pointer to i is " << pointer_to_i << "\n";
    cout << "The value of the variable pointed to by pointer_to_i is: " << *pointer_to_i << "\n";

    // The value of i is changed.
    i = 7;
    cout << "The new value of the variable i is                     : " << i << "\n";
    cout << "The value of the variable pointed to by pointer_to_i is: " << *pointer_to_i << "\n";
    cout << "The variable pointer_to_i is: " << pointer_to_i << "\n"; 
    //an object or variable can be changed while a pointer is pointing to it.
}