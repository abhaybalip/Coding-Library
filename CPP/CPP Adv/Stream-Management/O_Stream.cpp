#include <iostream>
#include <fstream>
int main(int argc, char const *argv[])
{
    std::ofstream fout;

    fout.open("Text.txt");

    char ch[] = "Hello World";
    fout.write(ch, sizeof(ch) / sizeof(char));

    // close file
    fout.close();

    return 0;
}