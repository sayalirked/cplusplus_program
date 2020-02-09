/*
In f1, the pointer variable x is a local variable to f1, and f1 returns the pointer to that variable. 
x can disappear after f1() is returned if x exists on the stack. So &x can become invalid.
In f2, the pointer variable px is assigned a value without allocating its space.
f3 works fine. Memory is allocated to the pointer variable px using malloc(). So, px exists on the heap, 
its existence will remain in memory even after the return of f3() as it is on the heap.
*/

int *f1(void)
{
    int x = 10;
    return (&x);
}

int *f2(void)
{
    int *px;
    *px = 10;
    return px;
}

int *f3(void)
{
    int *px;
    px = (int *)malloc(sizeof(int));
    *px = 10;
    return px;
}