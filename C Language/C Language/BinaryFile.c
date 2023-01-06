// c - Binary file management
#include<stdio.h>
#include<stdlib.h>
char ch[10];
int main(){
    // file opening modes : rb - read binary , wb - write  binary, ab - creat and write binary
    // rb+ - read and write both binary
    // opening file
    FILE *f1 = fopen("C:\\Users\\abhay\\OneDrive\\Documents\\GitHub\\test","wb+");
    FILE *f2 = fopen("C:\\Users\\abhay\\OneDrive\\Documents\\GitHub\\test","rb+");
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
    f1 = fopen("C:\\Users\\abhay\\OneDrive\\Documents\\GitHub\\test2","wb+");
    fputs("Hello World",f1);
    fclose(f1);

    f2 = fopen("C:\\Users\\abhay\\OneDrive\\Documents\\GitHub\\test2","rb+");
    fgets(ch,12,f2);
    int index=0;
    while(ch[index]!='\0'){
        printf("%c",ch[index]);
        index++;
    }

    return 0;
}