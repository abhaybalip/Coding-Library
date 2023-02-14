// c - union
#include<stdio.h>
union abc{
    int n;
    char ch;
    float f;
};
// total size = size of biggest data
void main(){
    union abc u1;
    u1.n = 100;
    printf("%d \t %f \t %c \n",u1.n,u1.f,u1.ch);
}