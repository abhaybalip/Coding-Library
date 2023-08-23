#include <iostream>
#include <list>
int main()
{
    // list declaration
    std::list<int> l, l1{1, 2, 3, 4, 5};

    // list methodes
    l.emplace(l.begin(), 10);
    l.emplace_back(2);
    l.emplace_front(2);
    l.merge(l1);

    l.push_back(1);
    l.push_front(2);
    l.pop_back();
    l.pop_front();
    l.insert(l.begin()++, 10);

    l.sort();
    return 0;
}