#include<iostream>
using namespace std;
int main(){
    cout<<"enter no of row for star pattern"<<endl;
    int row;
    cin>>row;
    cout<<endl;
    for(int i=1;i<=row;i++)
        {
            for(int s=0;s<=(row-i);s++)
            {
                cout<<" ";
            }
    
            for(int k=1;k<=i;k++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
}