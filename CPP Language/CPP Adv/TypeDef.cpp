// cpp language - TypeDef
#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    typedef int unit;
    int a = 10;
    cout<<"Data : "<<a<<endl;
    cout<<"DataType : "<<typeid(a).name();
    return 0;
}