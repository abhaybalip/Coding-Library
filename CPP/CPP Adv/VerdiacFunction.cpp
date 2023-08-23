// cpp - verdiac function
// function can input n data
#include <iostream>
using namespace std;
int sum(int lenght, ...)
{
    int *ptr, result = 0;
    ptr = &lenght;
    while (lenght > 0)
    {
        lenght--;
        ptr++;
        result += *ptr;
    }
    return result;
}
int multiply(int lenght, ...)
{
    int *ptr, result = 1;
    ptr = &lenght;
    while (lenght > 0)
    {
        lenght--;
        ptr++;
        result *= *ptr;
    }
    return result;
}
int main()
{
    int l = 5;
    cout << sum(l, 1, 2, 3, 4, 5) << endl;
    cout << multiply(l, 1, 2, 3, 4, 5) << endl;
    return 0;
}