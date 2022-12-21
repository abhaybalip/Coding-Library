// learn c++
// virtual function & abstract class
#include<iostream>
using namespace std;
class Animal
{
    public:
    // virtual function
    virtual void print();
};
class Cat
{
    public:
    void print()
    {
        cout<<"Cat Is Here"<<endl;
    }
};
int main()
{
    Cat c;
    c.print();

    return 0;
}