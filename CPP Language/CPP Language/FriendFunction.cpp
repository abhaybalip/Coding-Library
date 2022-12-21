// learn c++
// friend keyword

#include<iostream>
using namespace std;
class student
{
    // declaring private data
    private:
    string name = "name";
    int no = 420;
    float pointer = 100;

    // declaring friend function
    friend void show(student);
};

// creating friend function
void show(student you)
{
    cout<<"student id .:"<<you.no<<"\t Nmae : "<<you.name<<"\n pointer : "<<you.pointer<<endl;
}
int main()
{
    // creating class
    student he;

    // assigning class to its friend function
    show(he);

    student she;
    show(she);
}