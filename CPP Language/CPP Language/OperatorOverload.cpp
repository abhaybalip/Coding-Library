#include<iostream>
using namespace std;
class Sample
{
    public:
    int num = 10;
    void operator *()
    {
        num *= 10;
    }
    void operator +()
    {
        num += 10;
    }
    void display()
    {
        cout<<num <<endl;
    }
};
int main()
{
    Sample S;
    *S;
    +S;
    S.display();

    return 0;
}