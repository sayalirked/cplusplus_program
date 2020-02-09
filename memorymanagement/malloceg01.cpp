/*
The problem with void pointers is that there is no way of knowing the offset to the end of the allocated memory
block. For an int, this would be 4 bytes but for a double, the offset would be 8 bytes. So in order to retrieve
the entire block of memory that has been reserved, we need to know the data type and the way to achieve this
with malloc is by casting the return pointer.
You should not rely on pre-initialization as this depends on the data type as well as on the compiler you are 
using.
At compile time, only the space for the pointer is reserved (on the stack). When the pointer is initialized, 
a block of memory of sizeof(int) bytes is allocated (on the heap) at program runtime. The pointer on the stack
then points to this memory location on the heap.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    //void *p = malloc(sizeof(int));
    int *p = (int *)malloc(sizeof(int));
    printf("address = %p, value = %d\n",p,*p);
    return 0;
}