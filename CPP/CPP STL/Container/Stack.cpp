#include <iostream>
#include <stack>
int main()
{
    // stack declaration
    std::stack<int> s, s2;

    // stack methodes
    s.emplace(1);
    s.swap(s2);
    s.push(10);
    s.pop();
    s.top();

    return 0;
}