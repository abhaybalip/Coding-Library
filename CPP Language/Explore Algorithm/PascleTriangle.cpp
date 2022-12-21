// cpp program 
// Pascles's Triangle
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Limit For Pascle's Triangle : ";
    cin>>num;int i,j,k,l;
    for(i=0;i<num;i++)
    {
        for(j=0;j<(num-i);j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<k;
        }
        for(l=k;l>0;l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
}