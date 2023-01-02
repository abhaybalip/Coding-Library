// cpp - getline
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    // getline is methode of istream class
    // it is for getting input of one whole line
    
    // example - cin methode avoids data after space
    // char name[10];
    // cout<<"Enter Your Name : ";
    // cin>>name;
    // cout<<name[0];

    string Name;
    cout<<"Enter Full Name :";
    getline(cin,Name);
    cout<<Name;
}