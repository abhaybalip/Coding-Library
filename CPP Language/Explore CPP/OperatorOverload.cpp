#include<iostream>
using namespace std;
class Sample{
    public:
    int num = 10;
    void operator *(){
        num *= 10;
    }
    void operator +(){
        num += 10;
    }
    void display(){
        cout<<num <<endl;
    }
};
int main(){
    Sample s;
    *s;
    s.display();
    +s;
    s.display();

    return 0;
}