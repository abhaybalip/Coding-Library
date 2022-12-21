// learn c++
// classes aggregation
#include<iostream>
using namespace std;
class Address
{
    public:
    int pincode;
    string city;
    void setA(int pincode,string city)
    {
        this->city = city;
        this->pincode = pincode;
    }
};
class Student
{
    public:
    string name;
    int id;
    Address ad;
    void setS(int id,string name,Address ad)
    {
        this->id = id;
        this->name = name;
        this->ad = ad;
    }
    void show()
    {
        cout<<"Name : "<<name<<"\t id :"<< id<< endl<< "City : "<< ad.city<<" "<<ad.pincode<< endl;
    }
};
int main()
{
    Address ad;
    ad.setA(400043,"Mumbai");
    Student st;
    st.setS(03,"Abhay",ad);
    st.show();

    return 0;
}