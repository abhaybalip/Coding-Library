// cpp - Vector
#include<iostream>
#include<vector>
using namespace std;
int main(){

    // vector is resizable array
    // example - int type vector
    vector<int> vec;
    for(int i=1;i<6;i++){
        vec.push_back(i*10);
        cout<<vec[i-1]<<' ';
    }

    // vector capacity
    int cap = vec.capacity();
    // resize vector size
    int i = vec.resize(10);
    // data at index
    int data = vec.at(0);
    // remove last data
    vec.pop_back();
    return 0;
}