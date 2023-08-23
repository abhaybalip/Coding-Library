#include <iostream>
#include <deque>
// deque declaration
std::deque<int> dq, dq1{1, 2, 5, 2, 5};

int main()
{
    // dequeu methodes

    dq.emplace(dq.begin(), 0);
    dq.emplace_back(20);
    dq.emplace_front(2);

    dq.push_back(10);
    dq.push_front(20);
    dq.pop_back();
    dq.pop_front();

    return 0;
}