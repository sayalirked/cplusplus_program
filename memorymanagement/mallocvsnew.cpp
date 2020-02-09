/*
The constructor allocates memory for the private element _number (yes, we could have simply used int instead 
of int*, but that's for educational purposes only), and the destructor releases memory again. The setter method 
setNumber finally assigns a value to _number under the assumption that memory has been allocated previously.
With malloc, the program crashes on calling the method setNumber, as no memory has been allocated for _number - 
because the constructor has not been called. Hence, an EXC_BAD_ACCESS error occurs, when trying to access the 
memory location to which _number is pointing. 

The call to new has the following consequences:
1.Memory is allocated to hold a new object of type MyClass
2.A new object of type MyClass is constructed within the allocated memory by calling the constructor of MyClass
The call to delete causes the following:
1.The object of type MyClass is destroyed by calling its destructor
2.The memory which the object was placed in is deallocated
*/


#include <stdio.h>
#include <iostream>

class MyClass
{
private:
    int *_number;

public:
    MyClass()
    {
        std::cout << "Allocate memory\n";
        _number = (int *)malloc(sizeof(int));
    }
    ~MyClass()
    {
        std::cout << "Delete memory\n";
        free(_number);
    }
    void setNumber(int number)
    {
        *_number = number;
        std::cout << "Number: " << _number << "\n";
    }
};


int main()
{
    // allocate memory using malloc
    // comment these lines out to run the example below
    //MyClass *myClass = (MyClass *)malloc(sizeof(MyClass));
    //myClass->setNumber(42); // EXC_BAD_ACCESS
    //free(myClass);
	  
	// allocate memory using new
    MyClass *myClass = new MyClass();
    myClass->setNumber(42); // works as expected
    delete myClass;

    return 0;
}