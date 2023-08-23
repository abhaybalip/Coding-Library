// cpp - stl - bit set
#include <iostream>
#include <bitset>
int main()
{
    // bitset declaration
    std::bitset<1> bs;

    // bitset methode
    bs.set(0);
    bs.reset(1);
    bs.flip();

    bs.count();         // return count of set bit
    bool b = bs.none(); // test if any bit is set

    std::string s = bs.to_string();
    long ul = bs.to_ullong();
    long ul2 = bs.to_ulong();

    return 0;
}