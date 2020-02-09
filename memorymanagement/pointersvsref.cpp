/*
n the case of AddFour the caller does not even realize that val might be modified while with AddSix, 
the reference to val has to be explicitly written by using &.
*/
#include <iostream>

void AddFour(int &val)
{
    val += 4;
}

void AddSix(int *val)
{
    *val += 6; 
}

int main()
{
    int val = 0;
    AddFour(val);
    AddSix(&val);

    std::cout << "val = " << val << std::endl;
 
    return 0;
}