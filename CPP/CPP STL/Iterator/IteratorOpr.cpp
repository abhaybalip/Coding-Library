#include<iostream>
#include<vector>
#include<iterator>
int main(){
    // iterator declaration
    std::vector<int>::iterator itr,itr2;
    std::vector<int> v{0,1,2,3,4,5};

    // assigning iterator
    itr = v.begin();
    itr2 = v.end();

    int data = *itr;
    *itr = data*10;

    // iterator operation
    itr++;
    itr--;

    if(itr==itr2){
        std::cout<<"iterator are same \n";
    }
    if(itr!=itr2){
        std::cout<<"iterator are not same \n";
    }

    /* 
        Types of Iterator
            Input - Write and Read
            Output - Read Only
            
            Forward
            BiDirectional
            Random
    */
    return 0;
}