#include<iostream>
using namespace std;
int main()
{
    cout<<"enter array size"<<endl;
    int size;
    cin>>size;
    int* arr = new int[size];
    for(int i=0;i<=size;i++)
    {
        cout<<"Element "<<i<<":\t";
        cin>>arr[i];
        cout<<endl;
    }
    int temp;
    for(int j=0;j<=size;j++)
    {
        if(arr[j] > arr[j+1])
        {
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
    for(int i=0;i<=size;i++)
    {
        cout<<"Element "<<i<<":\t";
        cout<<arr[i];
        cout<<endl;
    }

}