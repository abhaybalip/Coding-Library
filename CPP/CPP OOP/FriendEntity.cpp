// cpp - Friend Entity
// friend function and class can access private data
#include<iostream>
class A{
    private: // private data
    int num;
    std::string str = "";
    public: // public data
    void setData(int num,std::string str){
        this->num = num;
        this->str = str;
    }
    // friends declared - can access private data
    friend void display(A a);
    friend class B;
};
class B{
    public:
    A a;
    A getobj(A a){
        this->a = a;
        a.num += 100;
        a.str += " World";
        // return modified class
        return a;
    }
};
void display(A a){
    std::cout<<"Private data of class A : "<<a.num<<' '<<a.str<<std::endl;
}
int main(){
    A a;
    a.setData(100,"Hello ");
    display(a);

    B b;
    a = b.getobj(a);
    std::cout<<"Ater making chnages by class B "<<std::endl;
    display(a);
    return 0;
}