#include <iostream>

// declares that the block of code doesnt throws any error
void greet(std::string name = "None ") noexcept
{
    std::cout << "Hello " + name + '\n';
}
int main(int argc, char const *argv[])
{
    /* code */
    greet("Abhay");
    return 0;
}