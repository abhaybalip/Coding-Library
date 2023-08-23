// cpp - Class & Object
#include <iostream>
// class definition
class Test_Class
{
    // Data & Function as-per access modifier
private:
    int private_num = 100;
    void set(int n1, int n2)
    {
        this->private_num = n1;
        this->public_num = n2;
    }

protected:
public:
    int public_num = 1;

    void display()
    {
        std::cout << "public num = " << public_num << "\tPrivate num = " << private_num << std::endl;
    }
};
int main()
{
    // Object of class
    Test_Class tc;
    tc.display();

    // pointer based object
    Test_Class *tc1 = new Test_Class;
    tc1->display();
    return 0;
}