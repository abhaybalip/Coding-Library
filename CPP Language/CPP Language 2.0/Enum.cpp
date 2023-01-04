// cpp - enume
#include<iostream>
enum week{
    monday = 1,tuesday,wednesdsy,thursday,friday,saturday,sunday
};
int main(){
    week w = monday, w2 = sunday;
    std::cout<<w<<' '<<w2;
    return 0;
}