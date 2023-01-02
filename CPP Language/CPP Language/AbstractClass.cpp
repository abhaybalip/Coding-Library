// cpp - Abstract class
#include<iostream>
class Parent_Class{
    public:
    virtual void display(){};
};
class Child_Class: public Parent_Class{
    public:
    int num = 100;
    std::string str = "hi";
    void display(){
        std::cout<<num <<" "<<str <<std::endl;
    }
};
int main(){
    Child_Class c;
    c.display();
    return 0;
}