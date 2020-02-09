/*
The syntax for overloading the new operator looks as follows:
void* operator new(size_t size);
The operator receives a parameter size of type size_t, which specifies the number of bytes of memory to be 
allocated. The return type of the overloaded new is a void pointer, which references the beginning of the block 
of allocated memory.
The syntax for overloading the delete operator looks as follows:
void operator delete(void*);
The operator takes a pointer to the object which is to be deleted. As opposed to new, the operator delete does 
not have a return value.
Memory is instantiated in new before the constructor is called, while the order is reversed for the destructor 
and the call to delete
*/

#include <stdio.h>
#include <iostream>

class MyClass
{
    int _mymember;

public:
    myClass(){
        std::cout << "Constructor is called.\n";
    }
    ~myClass(){
        std::cout << "Deconstructor is called.\n";
    }

    void *operator_new(size_t size){
        std::cout << "new: Allocating " << size << " bytes of memory" << std::endl;
        void *p = malloc(size);//allocate memory on the heap
        return p;
    }
    void operator delete(void *p)
    {
        std::cout << "delete: Memory is freed again " << std::endl;
        free(p);
    }
};

int main()
{
    MyClass *p = new MyClass();
    delete p;
}