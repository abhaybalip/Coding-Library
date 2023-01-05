// c - structure
#include<stdio.h>
struct std{
    int num;
    char ch;
};
// total space = int + char
void main(){
    // structure object
    struct std s1;
    s1.num = 10;
    s1.ch  = 'A';

    printf("%d , %c \n",s1.num,s1.ch);
}