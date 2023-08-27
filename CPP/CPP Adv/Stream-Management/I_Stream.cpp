// cpp - f-stream
/*
    stream classes >>
    istream - input stream / read
    ofstream - output stream / write
    fstream - read / write
*/
#include <iostream>
#include <string>
#include <fstream>
int main(int argc, char const *argv[])
{
    std::ifstream fin;

    fin.open("Text.txt");

    char ch[10];
    fin.read(ch, 5);

    std::cout << ch << '\n';

    std::cout << "File size: " << fin.get() << '\n';

    std::string data = "";
    getline(fin, data);
    std::cout << "file: " << data << '\n';

    fin.clear();

    // close file
    fin.close();

    return 0;
}