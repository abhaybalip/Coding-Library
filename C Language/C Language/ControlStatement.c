// c - control statement
#include<stdio.h>
void main(){
    int a;
    printf("Enter a Number \t");
    scanf("%d",&a);

    // else if ladder
    if(a>0){
        printf("a > 0 \n");
    }
    else if(a<0){
        printf("a < 0 \n");
    }
    else if(a==0){
        printf("a = 0 \n");
    }

    // switch case
    int num = 7;
    switch(num){
        case  1: {printf("monday \n");}
        case  2: {printf("tuesday \n");}
        case  3: {printf("wednesday\n");}
        case  4: {printf("thursday  \n");}
        case  5: {printf("friday     \n");}
        case  6: {printf("saturday    \n");}
        case  7: {printf("sunday       \n");}
        default: {printf("Invalid       \n");}
    }

    // while loop
    printf("Table of 10 using while loop \n");
    int n=10,i=0;
    while(i<=10){
        printf("%d * %d = %d \n",n,i,n*i);
        i++;
    }

    printf("Table of 20 using for loop \n");
    n = 20;
    // for loop
    for(int k=0;k<=10;k++){
        printf("%d * %d = %d \n",n,k,n*k);
    }

    printf("line 1");
    goto label;
    printf("line 2");
    label:
    printf("line 3");
}