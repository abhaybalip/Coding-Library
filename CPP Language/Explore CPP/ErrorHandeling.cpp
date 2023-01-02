// cpp - error handeling
#include<iostream>
#include<exception>
using namespace std;
float Inverse(int x){
    if(x==0){
        // throws exception if 0
        throw("Undefined Value");
    }
    else return 1/x;
}
int divide(int x,int y){
    return x/y;
}
int main(){
    int num = 0;
    // try this code block
    try{
        cout<<Inverse(num);
    }
    // catch any exception if throwed
    catch(const char*e){
        cout<<"Error Occured ! first try";
    }

    try{
        cout<<divide(1,0) <<endl;
    }
    catch(const char*e){
        cout<<"Error Occured !";
    }
}