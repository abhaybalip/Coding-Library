// learn c++
// Error Handeling

#include<iostream>
#include<exception>
using namespace std;
float Inverse(float x)
{
    if(x==0)
    {
        // throws exception if 0
        throw("Undefined Value");
    }
    return 1/x;
}

int main()
{
    // try this code block
    try 
    {   cout<<"Enter any Number \t";
        int num;
        cin>>num;
        cout<<Inverse(num);
    }
    // catch any exception if thr owed
    catch(const char*e){}
    
}