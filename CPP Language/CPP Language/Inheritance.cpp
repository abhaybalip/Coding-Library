// learn c++
// inheritance 

#include<iostream>
using namespace std;
class parent
{
    protected:
    int n = 10;
    string s = "abc";
};
class child : public parent
{
    public:
    void show()
    {
        cout<<"data of parent class : \n"<<n<<"\t"<<s<<endl;
    }
};
int main()
{
    parent p;
    child c;
    c.show();

}