#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Hello User\nEnter Two Number : ";
    cin>>num1>>num2;
    cout<<"Enter Operator : ";
    char op;
    cin>>op;
    switch(op){
        case '+': {
            cout<<"Answer = "<<(num1 + num2);
            break;
        }
        case '-': {
            cout<<"Answer = "<<(num1 - num2);
            break;
        }
        case '*': {
            cout<<"Answer = "<<(num1 * num2);
            break;
        }
        case '/': {
            cout<<"Answer = "<<(num1 / num2);
            break;
        }
        default :{
            cout<<"Invalid !";
            break;
        }
    }
    return 0;
}