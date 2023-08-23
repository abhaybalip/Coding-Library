// c - pointer
#include <stdio.h>
void main()
{
    // pointer declaration
    int *p;
    // assign value or variable
    *p = 10;
    int a = 100;
    int *q;
    *q = a;
    printf("Address stored : %d \n", p);
    printf("data stored : %d \n", *p);
    printf("%d : %d \n", q, *q);
}