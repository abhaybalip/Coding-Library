// learn c++

#include<iostream>
using namespace std;
// declare class
class student
{
    private:
    string name;
    int score;

    public:
    student(string name,int score)
    {
        this->name = name;
        this->score = score;
    }

    // declare friend class
    friend class teacher;
};
// creat friend class
class teacher
{
    public:

    teacher(student s)
    {
        cout<<"Name : "<<s.name<<"\t score : "<<s.score<<endl;
    }
};
int main()
{
    // creating object
    student you("xyz",25);
    teacher t(you);

}