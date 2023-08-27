// cpp - StringStream
#include <iostream>
#include <sstream>
int main(int argc, char const *argv[])
{
    std::stringstream ss;
    ss << 10;
    ss << "test-string";
    ss << true;

    std::cout << "string stream: " << ss.str() << '\n';

    int n = 0;
    std::string str = "";
    bool b = false;

    ss >> n;
    ss >> str;
    ss >> b;

    std::cout << n << ' ' << str << ' ' << b << '\n';

    std::cout << "string stream: " << ss.str() << '\n';

    ss.put('a');
    std::cout << ss.get() << '\n';

    ss.clear();

    return 0;
}