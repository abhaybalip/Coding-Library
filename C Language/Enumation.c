// learn c
// enume 
#include<stdio.h>
// enum declaration
// can be ordered or unordered
enum week
{
    monday = 1,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
};
void main()
{
    printf("welcome \n");
    // creating enum
    enum week w = monday;
    printf("%d",w);
}