// cpp - Thread
#include <iostream>
#include <thread>

void test()
{
    std::cout << "Thread is Running !" << '\n';
}
int main(int argc, char const *argv[])
{
    /*
        create new thread object using thread class
        lambda or function is passed as parametre
    */
    std::thread new_thread(test);

    /*
        Wait for thread to fininsh execution
        stops other thread till current thread is completed execution
    */
    new_thread.join();

    /*
        detaching thread from its thread object
        after detsching the resources are delocated if execution completed
    */

    new_thread.detach();

    return 0;
}