// cpp - Files
/*
    Modes to open a file :
    read : r / r+
    write : w / w+
    append : a / a+

    fwrite & fread  : pointer- write/read element-size , element-count , file-pointer

*/
#include <iostream>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *file;
    file = fopen("text.txt", "a+");

    std::string s = "this is string data";
    char ch[] = "Hello World";

    // write data stream to file
    // fwrite(ch,sizeof(char),sizeof(ch)/sizeof(char),file);

    file = fopen("number.txt", "a");

    int arr[] = {0, 1, 2, 3, 4};
    fwrite(arr, sizeof(int), sizeof(arr) / sizeof(int), file);

    char *ch1;

    file = fopen("text.txt", "r+");
    fread(ch1, sizeof(char), sizeof(ch) / sizeof(char), file);

    return 0;
}