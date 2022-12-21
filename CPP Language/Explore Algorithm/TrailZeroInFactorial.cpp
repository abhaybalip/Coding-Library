// No of trailing zeros in factorial of given number
// count no of 5 arriving from 1 to Number
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter A Number : ";
    int Num;
    cin>>Num;
    int Ans = 0;
    for(int i=5;i<=Num;i*=5)
    {
        Ans += Num/i;
    }
    cout<<Ans;
    return 0;
}