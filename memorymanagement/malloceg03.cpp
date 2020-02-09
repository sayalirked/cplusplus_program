#include <stdio.h> 
#include <stdlib.h> 

int main()
{
    // (X) generates a memory leak
    int *m = (int*)malloc(sizeof(int)); 
    m = NULL; 

    // (Y) uses a dangling pointer
    int *n = (int*)malloc(sizeof(int)); 
    free(n);
    *n = 23;

    // (Z) uses an uninitialized pointer
    char *o;
    *o = 'a'; 

    return 0;
}