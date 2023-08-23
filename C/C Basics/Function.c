// c - function
#include <stdio.h>
// return tyep - name - ppameters
void print()
{
    printf("welcome \n");
}
// parametrised function
int sum(int x, int y)
{
    return x + y;
}
void main()
{
    print();
    int a = sum(2, 3);
    printf("%d", a);
}