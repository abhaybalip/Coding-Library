// cpp - stl - map
#include<iostream>
#include<map>
int main(){
    std::map<int,std::string> m;
    m[03] = "abhay";

    // map methodes
    m.insert(
        {01,"daji"}
    );
    m.emplace(02,"rohit");

    m.clear();
    m.erase(02);
    m.find(01);

    bool b = m.empty();
    
    return 0;
}