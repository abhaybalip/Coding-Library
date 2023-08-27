#include <iostream>
auto power = [](int x, int y)
{
    int result = 1;
    while (y > 0)
    {
        /* code */
        result *= x;
        --y;
    }
    return result;
};
int main(int argc, char const *argv[])
{
    std::cout << power(2, 8) << '\n';

    return 0;
}