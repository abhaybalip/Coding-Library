// cpp - private entity
// only class functions and friends can access private data
#include <iostream>
class A
{
private: // private data of class
    int id;
    std::string name;

public: // public data of class
    A(int id, std::string name)
    {
        this->id = id;
        this->name = name;
    }
    void display()
    {
        std::cout << "id = " << id << " Name = " << name << std::endl;
    }
};
int main()
{
    A a(10, "Hello World");
    a.display();

    // error - cannot access private data
    // std::cout<<a.name<<' '<<a.id;
    return 0;
}