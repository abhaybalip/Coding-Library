#include<iostream>
using namespace std;
// operator overloading 
void sum(int x,int y)
{
    int ans = x + y;
    cout<<ans<<endl;
}
void sum(int x,int y,int z)
{
    int ans = x + y +z;
    cout<<ans;
}
int main()
{
    sum(2,2);
    sum(2,2,2);

    return 0;
}