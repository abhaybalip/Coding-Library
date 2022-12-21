#include<iostream>
using namespace std;
char strrev(string str){
    int size = 0;
    while(str[size] != '\0')
    {
        size++;
    }
    string str2 ="";
    int j=size+1;
    for(int i=0;i<=size;i++)
    {
        str2 = str[i] + str2 ;
        j = j-1;
    }
    cout<<str2;
}
int main()
{
    cout<<"enter a string to make reverse"<<endl;
    string m;
    cin>>m;
    strrev(m);
}