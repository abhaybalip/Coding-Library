// learn cpp - string stream
#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;
int main(){
    stringstream ss;
    stringstream ss2;
    string Name,String_Number;
    int num,num2,num3;
    cout<<"Hello User \nEnter Your Name : ";
    getline(cin,Name);
    ss<<Name;
    cout<<"Your Name Stored in StringStream : "<<ss.str()<<endl;
    ss.clear();
    cout<<"Enter a Number : ";
    cin>>num;
    ss2<<num;
    cout<<"Number Stored in StringStream : "<<ss2.str()<<endl;
    cout<<"Enter A Number That will be Stored in String : ";
    cin>>String_Number;
    stringstream ss3;
    ss3<<String_Number;
    cout<<"Number Stored In String : "<<ss3.str()<<endl;
    ss3>>num2;
    cout<<"The Number is : "<<num2;
    return 0;
}