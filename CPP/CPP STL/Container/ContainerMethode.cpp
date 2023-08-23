#include <iostream>
#include <vector>
std::vector<int> v{0, 1, 2, 3, 4}, v2;
int main()
{
    // common methodes of container

    // Data Manipulation
    v.push_back(10);
    v.pop_back();
    v2.assign(v.begin(), v.end());
    v.insert(v.begin(), 1);
    v.clear();
    v.erase(v.begin());
    v2.swap(v);
    v.resize(5);

    // Properties
    int size = v.size();
    int max_size = v.max_size();
    int capacity = v.capacity();
    bool b = v.empty();

    // return iterator
    v.begin();
    v.end();

    // return data
    v.front();
    v.back();
    v.at(0);

    return 0;
}