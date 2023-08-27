// cpp - File
/*
    string stream
    File print and scan methode
*/
#include<iostream>
#include<stdlib.h>
#include<sstream>
int main(int argc, char const *argv[])
{
    FILE* file;
    file = fopen("test.txt","r");

    fprintf(file,"%s","Hello World");

    char*ch;
    fscanf(file,"%s",ch);

    std::cout<< std::string(ch);

    return 0;
}