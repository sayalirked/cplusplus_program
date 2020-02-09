#include "header_example.h"

#include <iostream>
using std::cout;

void OuterFunc(int i){
    InnerFunc(i);
}

void InnerFunc(int i){
    cout << "the value of integer is " << i << "\n";
}

int main(){
    int a = 6;
    OuterFunc(a);
}