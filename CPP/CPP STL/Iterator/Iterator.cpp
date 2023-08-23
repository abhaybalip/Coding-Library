// cpp - stl - Iterator
#include <iostream>
#include <iterator>
#include <vector>
std::vector<int> v{0, 1, 2, 3, 4, 5};
int main()
{
    // Iterator Declaration
    std::vector<int>::iterator itr;

    for (itr = v.begin(); itr != v.end(); itr++)
    {
        std::cout << *itr << ' ';
    }
    return 0;
}