// cpp - Function and methode
#include<iostream>
class A{
    public:
    void display(){
        std::cout<<"Class A methode display executed"<<std::endl;
    }
};
// non returning function
void print(std::string msg){
    std::cout<<msg<<std::endl;
}
// return type function
int multiply(int a,int b){
    return a*b;
}
// recursive function
int factorial(int x){
    if(x>0) return x*factorial(x-1);
    else return 1;
}
int main(){
    print("Hello World");
    std::cout<<multiply(2,5) <<std::endl<< factorial(5);

    A a;
    a.display();

    return 0;
}