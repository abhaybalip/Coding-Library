// c - File Management
#include<stdio.h>
#include<stdlib.h>
char ch[10];
int main(){
    // file opening modes : r - read , w - write , a - creat and write
    // r+ - read and write both
    // opening file
    FILE *f1 = fopen("C:\\Users\\abhay\\OneDrive\\Documents\\GitHub\\test.txt","w+");
    FILE *f2 = fopen("C:\\Users\\abhay\\OneDrive\\Documents\\GitHub\\test.txt","r+");
    int n=10,n2,n3;
    char c='A',c2,c3;
    // write to file
    fprintf(f1,"%d %c",n,c);

    // close file
    fclose(f1);

    // read from file
    fscanf(f2,"%d %c",&n2,&c2);
    fclose(f2);
    printf("Data Read from file : %d %c \n",n2,c2);


    // string methode for file
    f1 = fopen("C:\\Users\\abhay\\OneDrive\\Documents\\GitHub\\test.txt","w+");
    fputs("Hello World",f1);
    fclose(f1);

    f2 = fopen("C:\\Users\\abhay\\OneDrive\\Documents\\GitHub\\test.txt","r+");
    fgets(ch,12,f2);
    int index=0;
    while(ch[index]!='\0'){
        printf("%c",ch[index]);
        index++;
    }

    return 0;
}