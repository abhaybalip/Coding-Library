// learn c++
// function overriding
#include<iostream>
using namespace std;
class Animal
{
    public:
    void print()
    {
        cout<<"Animal Is Here"<<endl;
    }
};
class Dog : public Animal
{
    public:
    void print()
    {
        cout<<"Dog Is Here"<<endl;
    }
};
int main()
{
    Dog d;
    d.print();
    return 0;
}