// c - memory management
#include <stdio.h>
#include <stdlib.h>
void main()
{
    // pointer declaration
    int *pointer;
    int a = 10;
    // address allocation
    pointer = &a;
    // Data accessing
    printf("%d : %d \n", pointer, *pointer);

    // Dynamic array conversion - by allocation memory equal of 5 int data
    pointer = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        pointer[i] = 5 * i;
        printf("%d \n", pointer[i]);
    }

    // reallocate same memory to anoyher pointer
    int *pointer2 = (int *)realloc(pointer, 5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", pointer2[i]);
    }

    // free up allocated memory
    free(pointer);
}