// learn c
// structure and union
#include<stdio.h>
// declaring structure
struct student
{
    int id = 0;
    char name[3] = {'x','y','z'};
}me;
// declaring union
union byte
{
    int n = 10;
    float f;
    long l;
    char c;
}var;
void main()
{
    printf("student detail Entered \nName : %s \tNo.: %d \n",me.name,me.id);
    printf("Union data \n Int %d Float %f Char %c",var.i,var.f,var.c);

}