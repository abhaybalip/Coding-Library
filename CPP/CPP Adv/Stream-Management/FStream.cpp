#include <iostream>
#include <fstream>
int main(int argc, char const *argv[])
{
    try
    {
        std::fstream fs_0("input.txt"), fs_1("output.txt");

        char ch[5];
        fs_0.read(ch, 5);

        fs_1.write(ch, 5);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}