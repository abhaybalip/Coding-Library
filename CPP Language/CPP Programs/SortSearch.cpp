#include<bits/stdc++.h>
using namespace std;
void PrintArray(int arr[],int n) {int i=0; while(i<n) cout<<arr[i++]<<" ";}
void SortArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[j];
                arr[j]   = arr[i];
                arr[i]   = temp;
            }
        }
    }
}
int SearchArray(int arr[],int size,int data)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==data) return i;
        else if(i==size-1) cout<<"Not Found"<<endl;
    }
}
int main()
{
    int arr[] = {7,4,6,2,9,0};
    SortArray(arr,6);
    PrintArray(arr,6);
    int j = SearchArray(arr,6,7);
    cout<<"Found : "<<arr[j];

}