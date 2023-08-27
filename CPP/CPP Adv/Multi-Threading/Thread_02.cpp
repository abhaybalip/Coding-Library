// cpp - Thread
#include<iostream>
#include<thread>
int main(int argc, char const *argv[])
{
    /* code */
    std::thread new_thread([](){std::cout<<"Running Thread !\n";});

    std::cout<<"Thread ID: "<<new_thread.get_id() <<'\n';
    
    std::cout<<"Thread join: "<<new_thread.joinable() <<'\n';

    return 0;
}