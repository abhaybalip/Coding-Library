#include<iostream>
using namespace std;
namespace one 
{
    void print()
    {
        cout<<"print function with namespace"<<endl;
    }
}
namespace two
{
    void print()
    {
        cout<<"print function without namespace"<<endl;
    }
}
using namespace one;
int main()
{
    print();
}