#include <iostream>
#include <vector>
#include "increment_and_sum.h"

using std::vector;
using std::cout;

int main(){
    vector<int> v{1,2,3,4,5};
    int total=IncrementandComputeVectorSum(v);
    cout << "the total is " << total << "\n";
}
/* Remember that you will need to include all the files in your compile command:
g++ -std=c++17 ./code/main.cpp ./code/increment_and_sum.cpp ./code/vect_add_one.cpp
followed by
./a.out
*/