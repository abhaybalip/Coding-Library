#include<iostream>
#include<sstream>
int main(int argc, char const *argv[])
{
    std::stringstream ss;
    char ch;

    ss.put('A');
    // ss.get(ch);

    std::cout<<(char)ss.get() <<'\n';

    ss<<"test-string";

    std::cout<<(char)ss.peek() <<'\n';

    if(ss.eof()) printf("Reached end of stream \n");
    else printf("stream end is not reached \n");

    return 0;
}