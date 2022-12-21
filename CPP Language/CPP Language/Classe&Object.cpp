// learn c++
// class and object
#include<iostream>
using namespace std;

// declaring class
class Student
{
    public:
    string name;
    string course;
    int id;

    // declaring constructor 
    Student(string aname,string acourse,int aid)
    {
        name = aname;
        course = acourse;
        id = aid;
    }

    void display()
    {
        cout<<course<<endl<<id<<"\t"<<name<<endl;
    }
};
int main()
{
    // creating class 
    Student me("abhay","CSE",101);
    me.display();

}