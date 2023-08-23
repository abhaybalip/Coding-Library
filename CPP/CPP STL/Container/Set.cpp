// cpp - stl - set
#include <iostream>
#include <set>
int main()
{
    // set declaration
    std::set<int> s, s1;

    // std::template<
    //     class T,
    //     set::key_type/value_type class compare = less<T>,
    //     set::key_compare/value_comapare class Alloc = allocator<T>
    // >class set;

    // set methodes
    s.emplace(10);
    s.insert(10);
    s.erase(10);
    s.clear();
    s.swap(s1);

    s.find(10);
    s.count(10);

    s.upper_bound(10);
    s.lower_bound(10);

    std::set<int>::key_compare comp = s.key_comp();
    std::set<int>::value_compare comp2 = s.value_comp();
    return 0;
}