// cpp - Aggregation
#include <iostream>
class Address
{
public:
    int pin;
    std::string city, country;
    void setData(int pin, std::string city, std::string country)
    {
        this->city = city;
        this->pin = pin;
        this->country = country;
    }
};
class Student
{
public:
    std::string name;
    int no;
    Address ad;
    Student(int no, std::string name, Address ad)
    {
        this->name = name;
        this->no = no;
        this->ad = ad;
    }
    void Display()
    {
        std::cout << no << ' ' << name << std::endl;
        std::cout << ad.country << "\t" << ad.city << ' ' << ad.pin << std::endl;
    }
};
int main()
{
    Address ad;
    ad.setData(43, "Mumbai", "India");
    Student s(3, "MySelf", ad);
    s.Display();
    return 0;
}