#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main(){
    vector<int> v1{0,1,2};
    vector<int> v2={3,4,5};
    vector<int> v3;
    v3={6};
    cout << "Everything worked" << "\n";

    vector<vector<int>> v {{1,2},{3,4}};
    cout << "A 2D vector has been created." << "\n";
}