// cpp - class template
#include<iostream>
using namespace std;
// declare template for class
template<class T>
class Sample{
    public:
    T Data;
    T *Address;
    Sample(T Data){
        this->Data = Data;
        Address = &Data;
    }
    void Display(){
        cout<< "Data : " <<Data <<endl <<"Addresss : " <<Address <<endl;
    }
};
template<class T,class R>
class Sample2{
    public:
    Sample2(T a,R b){
        cout<<"Data1 : " <<a <<endl <<"Data2 : " <<b <<endl;
    }
};
int main(){
    Sample<int> s(25);
    s.Display();

    Sample2<int,char> s2(10,'A');
    return 0;
}