#include <stdio.h>
#include <stdlib.h>

struct MyStruct {
    int i; 
    double d; 
    char a[5];
};


int main(){

    int *p2 = (int*)malloc(3*sizeof(int));
    p2[0] = 1; p2[1] = 2; p2[2] = 3;
    printf("address=%p, second value=%d\n", p2, p2[1]);

    MyStruct *p3 = (MyStruct*)calloc(4,sizeof(MyStruct));
    p3[0].i = 1; p3[0].d = 3.14159; p3[0].a[0] = 'a';
    printf("address=%p, second value=%f\n", p3, p3[0].d);

    //void *p = malloc(100); 
    free(p2);
    free(p3);

    return 0;
}
