// learn c++
// control statement

#include<iostream>
using namespace std;
int main()
{
    // if - else 
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;

    if(num>0)
        cout<<"number greater than 0"<<endl;
    else if(num==0)
        cout<<"number is 0"<<endl;
    else if(num<0)
        cout<<"number less than 0"<<endl;

    // switch case
    cout<<"enter day number"<<endl;
    cin>>num;
    switch(num)
   { 
        case  1: {cout<<"monday"<<endl; break;}
        case  2: {cout<<"tuesday"<<endl; break;}
        case  3: {cout<<"wednesday"<<endl; break;}
        case  4: {cout<<"thursday"<<endl; break;}
        case  5: {cout<<"friday"<<endl; break;}
        case  6: {cout<<"saturday"<<endl; break;}
        case  7: {cout<<"sunday"<<endl; break;}
        default: {cout<<"Invalid"<<endl;}
    }

    // do - while loop
    cout<<"enter a number"<<endl;
    cin>>num;
    int i=1;
    cout<<"table of "<<num<<endl;
    while(i<=10)
    {
        cout<<num*i<<endl;
        i=i+1;   // increment operator 
    }

    // for loop
    for(int j=1;j<=10;j++)
    {
        cout<<num*j<<endl;
    }

    // goto statement
    cout<<"welcome one"<<endl;
    goto label;
    cout<<"welcome two"<<endl;
    label :
    cout<<"welcome three"<<endl;
}