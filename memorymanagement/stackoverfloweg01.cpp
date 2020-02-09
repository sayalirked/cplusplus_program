#include <stdio.h>


void myFunc(int b){
    myFunc(b);
    printf("current: %p \n",&b);

}

int factorial(int x) {
    printf("\t current: %p \n", &x);
    return x == 0 ? 1 : x * factorial(x-1);
}


int main(){
    int a = 5;
    printf("previous: %p",&a);
    // myFunc(a);
    factorial(-5);
    
    return 0;
}