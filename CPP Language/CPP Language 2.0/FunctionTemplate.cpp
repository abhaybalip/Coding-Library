// cpp -  function templates
#include<iostream>  
using namespace std;  
// function with template
// here t is placeholder for data type
template<class T>
T Add(T a,T b){
    return (a + b);
}
template<class T>
T Power(T a,T b){
    T ans = 1;
    for(int i=0;i<b;i++){
        ans *= a;
    }
    return ans;
}
template<class T,class R>
void Display(T a,R b){
    cout<< "Data : "<< a <<endl <<"Data : "<< b <<endl;
}
int main(){
    int a = 1,b = 4;
    cout<< Add(a,b) <<endl;

    int m = 2,n = 8;
    cout<< Power(m,n) <<endl;

    char c = 'A';
    float f = 2.5;
    Display(c,f);
    return 0;
}