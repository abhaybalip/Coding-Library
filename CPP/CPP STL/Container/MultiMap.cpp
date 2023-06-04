// cpp - stl - multimap
#include<iostream>
#include<map>
int main(){
    // multimap declaration
    std::multimap<int,std::string> mm,mm2;

    // multimap methodes
    mm.insert({
        01,"daji"
    });
    mm.emplace(02,"rohit");
    mm.erase(02);
    mm.swap(mm2);
    
    bool b = mm.empty();

    return 0 ;
}