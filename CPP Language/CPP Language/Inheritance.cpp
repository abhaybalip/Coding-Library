// cpp - class inheritance
#include<iostream>
class Parent_Class{
    protected:
    public:
    int num = 100;
    std::string str = "hello";
};
class Child_Class : public Parent_Class{
    public:
    void setData(int num,std::string str){
        this->num = num;
        this->str = str;
    }
    void display(){
        std::cout<<num<<' '<<str<<std::endl;
    }
};
int main(){

    Child_Class c;
    std::cout<<"Parent class data : ";
    c.display();
    std::cout<<"child class data : ";
    c.setData(0,"hi");
    c.display();

    // parent child reference
    Parent_Class p = Child_Class();
    std::cout<<"parent : "<<p.num<<' '<<p.str<<std::endl;

    return 0;
}