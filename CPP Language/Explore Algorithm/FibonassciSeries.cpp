// cpp program
// Fibonasci Series
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter A String : ";
    string s;
    cin>>s;
    int len = 0;
    while(s[len]!='\0') len++;

    string s1 = "";
    for(int i=len-1;i>=0;i--) s1 += s[i];

    cout<<"Reverse Of String : "<<s1<<endl;
    if(s1 == s) cout<<"FiboNassi Series !";
    else cout<<"Not FiboNassi Series !";
}