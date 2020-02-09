Page
Select a guide notebook page number(Optional)
6
1
2
3
4
5
6
7
8
9
10
of 10
Quiz : Modifying several parameters
An additional advantage of passing variables by reference is the possibility to modify several variables. When using the function return value for such a purpose, returning several variables is usually very cumbersome.

Your task here is to create a function AddFive that modifies the int input variable by adding 5 and modifies the bool input variable to be true. In the code to the right you will find the function call in main().

HIDE SOLUTION

void AddFive(int &val, bool &success)
{
    val += 5;
    success = true;
}
success = true;
1
#include <iostream>
2
​
3
void AddFive(int &val, bool &success){
4
    val+=5;
5
    success = true;
6
}
7
​
8
int main()
9
{
10
    int val = 0;
11
    bool success = false;
12
    AddFive(val, success);
13
    val += 2;
14
​
15
    std::cout << "val = " << val << ", success = " << success << std::endl;
16
 
17
    return 0;
18
}
