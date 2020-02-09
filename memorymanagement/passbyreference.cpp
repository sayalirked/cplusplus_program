/*
As with the example of AddThree above, the function can now modify the argument such that the changes also 
happen on the caller side. In addition to the possibility to directly exchange information between function 
and caller, passing variables by reference is also faster as no information needs to be copied, as well as 
more memory-efficient.
A major disadvantage is that the caller does not always know what will happen to the data it passes to a 
function (especially when the function code can not be modified easily). Thus, in some cases, special steps
 must be taken to protect ones data from inappropriate modification.
*/

#include <iostream>

void AddFour(int &val)
{
    val += 4;
}

int main()
{
    int val = 0;
    AddFour(val);
    val += 2;

    std::cout << "val = " << val << std::endl;
 
    return 0;
}