// cpp - dynamic memory / new and delete
#include<iostream>
void printArray(int*array,int size){
    for(int i=0;i<=size;i++){
        std::cout<<array[i]<<' ';
    }
    std::cout<<std::endl;
}
int main(){
    int size = 5;
    // dynamic variable
    int*p = new int(5);
    std::cout<<"initialised data : "<<*p<<"\n";

    delete p;
    std::cout<<"after deleting (garbage value): "<<*p<<"\n";
    
    // dynamic array
    int*array = new int[size];
    for(int i=0;i<=size;i++){
        array[i] = i*5;
    }
    printArray(array,size);

    array = new int[size+5];
    for(int i=0;i<=size+5;i++){
        array[i] = i*10;
    }
    printArray(array,size+5);

    delete[] array;
    printArray(array,size+5);
    return 0;
}