#include<iostream>
#include<math.h>
using namespace std;
float power(int m,int n)
{
    if(m<0)
    {
        cout<<"Invalid"<<endl;
    }
    else
    {
        float ans;
        for(int i=1;i<=n;i++)
        {
            ans = ans*i;
        }
        return ans;
    }
}
float factorial(int x)
{
    if(x<0)
    {
        cout<<"Invalid"<<endl;
    }
    else
    {
        int ans = 1;
        for(int i=1;i<=x;i++)
        {
            ans = ans*i;
        }
        return ans;
    }
}
float permutation(int m,int n)
{
    if(m<0 || n<0)
    {
        cout<<"Invalid"<<endl;
    }
    else
    {
        return (factorial(m) / factorial(m-n));
    }
}
float combination(int m,int n)
{
    if(m<0 || n<0)
    {
        cout<<"Invalid"<<endl;
    }
    else
    {
        return (factorial(m) / (factorial(m-n)*factorial(n)));
    }
}
float binomialexp(int a,int b,int power)
{
    int n = power,r = 0;
    float temp;
    float ans = 0;
    for(int r=0;r<=n;r++)
    {
        temp = combination(n,r)*pow(a,(n-r))*pow(b,r);;
        ans = ans + temp;
    }
    cout<<ans;
}
int main()
{
    binomialexp(2,2,5);
    return 0;
}