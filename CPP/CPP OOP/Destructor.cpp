#include <iostream>
class Test_Class
{
private:
    /* data */
    int *num;

public:
    Test_Class(/* args */ int num);
    ~Test_Class();

    void display()
    {
        std::cout << *num << '\n';
    }
};

Test_Class::Test_Class(/* args */ int num)
{
    this->num = &num;
}

Test_Class::~Test_Class()
{
    delete num;
}

int main()
{
    Test_Class tc(10);
    tc.display();

    return 0;
}