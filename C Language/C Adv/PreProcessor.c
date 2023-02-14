// c - pre processor

// header file inclusion
#include<stdio.h>
#include<stdbool.h>
// define data as keyword
#define num 100
#define AreaCircle(r) (22*r*r/7)

int main(){
    printf("%d \n",num);
    printf("%d \n",AreaCircle(5));

    // pre defined macros
    printf("Current Time : %s \n",__TIME__);
    printf("Current Data : %s \n",__DATE__);
    printf("File Name : %s \n",__FILE__);
    printf("Line Number : %d \n",__LINE__);
    printf("C Standard : %d \n",__STDC__);

    #if(num==100)
    printf("num = %d \n",num);
    #endif
    
    return 0;
}