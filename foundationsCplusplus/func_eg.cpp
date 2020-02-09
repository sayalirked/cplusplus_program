#include <iostream>
using std::cout;

int Additionfunction(int i, int j){
    return i+j;
}

int main(){
    auto d = 5;
    auto e=6;
    cout << Additionfunction(d,e) << "\n";
}