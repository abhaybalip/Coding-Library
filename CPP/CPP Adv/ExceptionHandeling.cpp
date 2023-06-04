#include<iostream>
#include<exception>
float divide(int a,int b){
    if(b==0)
        throw("Divide by zero = Infinity ! \n");
    else 
        return a/b;
}
int main(){
    int a=1,b=0;
    // try code block
    try{
        int result = divide(a,b);
    }
    // execute catch if error occured
    catch(const char*ch){
        std::cout<<"Exception Occured ! \n";
        std::cout<<ch;
    }
    return 0;
}