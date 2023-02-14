// cpp - polymorphism
#include<iostream>
class Parent_Class{
    public:
    void display(){
        std::cout<<"Parent class function is running"<<std::endl;
    }
};
class Child_Class : public Parent_Class{
    public:
    // function overridden by child class
    void display(){
        std::cout<<"Child class function is running"<<std::endl;
    }
};
// polymorph function
int sum(int a,int b){
    return a+b;
}
int sum(int x,int y,int z){
    return x+y+z;
}
int main(){
    // function overloading
    std::cout<<sum(1,6)<<' '<<sum(4,3)<<std::endl;

    // function overiding
    Child_Class c;
    c.display();

    // parent child class reference
    Parent_Class p = Child_Class();
    p.display();
    return 0;
}