#include <iostream>
#include <queue>
int main()
{
    // queue declaration
    std::queue<int> q, q1;

    // queue methodes
    q.push(10);
    q.pop();
    q.emplace(10);

    q.front();
    q.back();

    return 0;
}