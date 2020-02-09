#include <iostream>
#include <vector>
using std::cout;
using std::vector;

void Addone(int* j){
    (*j)++; 
}

int main() {
    // Vector v is declared and initialized to {1, 2, 3}
    vector<int> v {1, 2, 3};
    
    // Declare and initialize a pointer to the address of v here:
    vector<int>* pointer_to_v = &v;
    // The following loops over each int a in the vector v and prints.
    // Note that this uses a "range-based" for loop:
    // https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Res-for-range
    for (int a: v) {
        cout << a << "\n";
    }
    
    cout << pointer_to_v << "\n";
    // Dereference your pointer to v and print the int at index 0 here (note: you should print 1):
    cout << (*pointer_to_v)[0] << "\n";

    //Addone(*j)
    int ij=1;
    int* pi = &ij;
    Addone(pi);
}