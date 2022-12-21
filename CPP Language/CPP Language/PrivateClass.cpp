// learn c++
// private data 
#include<iostream>
using namespace std;

// declaring class
class Company
{
    public:     // public object
    string name;

    private:    // private object
    int value;
    int people;

    // creating constructor 
    Company(string aname,int avalue,int apeople)
    {
        name = aname;
        value = avalue;
        people = apeople;
    }
    // destructor format
    // ~<class_name>(){}
};
int main()
{
    Company hi("hi",25,25);

}