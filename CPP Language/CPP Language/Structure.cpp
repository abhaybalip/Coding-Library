// learn cpp
// structure in cpp
#include<iostream>
struct Student{
    char Name[10];
    char Degree[5];
    float ptr;
    Student(){
        std::cout<<"Student Structure Is Created"<<std::endl;
    }
    void Set_Data(){
        std::cout<<"Enter Name : ";
        std::cin>>Name;
        std::cout<<"\nEnter Degree & Pointer : ";
        std::cin>>Degree>>ptr;
        std::cout<<std::endl;
    }
    void Display_Data(){
        std::cout<<"Student Name : "<<Name<<"\nDegree : "<<Degree<<" Pointer : "<<ptr<<std::endl;
    }
};
int main(){
    std::cout<<"Hello user"<<std::endl;
    Student S;
    S.Set_Data();
    S.Display_Data();
    return 0;
}