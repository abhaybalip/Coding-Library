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
class A{
    public:
    int num = 1;
};
class B{
    public:
    char ch = 'A';
};
class C:public B,public A{
    public:
    void display(){
        std::cout<<"Data inherited from class A : num = "<<num<<"\nData inherited from class B : ch = "<<ch<<std::endl;
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

    std::cout<<"Multiple Inheritance : \n";
    C c1;
    c1.display();
    return 0;
}