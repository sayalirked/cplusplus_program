/*
From the output we can see that the stack address is different for myClass1 and myClass2 - as was expected. 
The address of the managed memory block on the heap however is identical. This means that when the first object 
goes out of scope, it releases the memory resource by calling free in its destructor. The second object does 
the same - which causes the program to crash as the pointer is now referencing an invalid area of memory,
 which has already been freed.
*/

#include <iostream>

class MyClass
{
private:
    int *_myInt;

public:
    MyClass()
    {
        _myInt = (int *)malloc(sizeof(int));
    };
    ~MyClass()
    {
        free(_myInt);
    };
    void printOwnAddress() { std::cout << "Own address on the stack is " << this << std::endl; }
    void printMemberAddress() { std::cout << "Managing memory block on the heap at " << _myInt << std::endl; }
};

int main()
{
    // instantiate object 1
    MyClass myClass1;
    myClass1.printOwnAddress();
    myClass1.printMemberAddress();

    // copy object 1 into object 2
    MyClass myClass2(myClass1); // copy constructor
    myClass2.printOwnAddress();
    myClass2.printMemberAddress();

    return 0;
}