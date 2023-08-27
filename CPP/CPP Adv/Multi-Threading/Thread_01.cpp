// cpp - Thread
#include <iostream>
#include <thread>
#include<windows.h>
int main(int argc, char const *argv[])
{
    std::thread new_thread([](){
        std::cout << "Running Thread ! \n";

        // Thread sleep
        std::this_thread::sleep_for(std::chrono::seconds(5));
        std::this_thread::sleep_until(std::chrono::steady_clock::now() + std::chrono::seconds(5));
        

    });
    // std::thread::yield();

    return 0;
}