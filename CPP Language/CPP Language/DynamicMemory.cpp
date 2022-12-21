// learn c++
#include<iostream>
using namespace std;
int main()
{
    // allocating memory at run time
    // new keyword
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int*arr = new int[size];

    // inserting array data
    for(int i=0;i<=size;i++)
    {
        printf("enter %d th data",(i+1));
        scanf("%d",&arr[i]);
        cout<<endl;
    }

    // display array
    for(int i=0;i<=size;i++)
    {
        printf("%d \n",arr[i]);
    }

    // deleting array
    delete arr;
    
}