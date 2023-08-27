// cpp - UserDefined Exception
#include <iostream>
class CustomException : public std::exception
{
private:
    /* data */
public:
    CustomException(/* args */);
    ~CustomException();
};

CustomException::CustomException(/* args */)
{
    printf("CustomException : Divide by zero Error ! \n");
}

CustomException::~CustomException()
{
}

int main(int argc, char const *argv[])
{
    int a = 1, b = 0;
    try
    {
        if (b == 0)
            throw CustomException();
        else
            printf("%d", a / b);
    }
    catch (const CustomException &e)
    {
        printf("Catch block : Error Occured !\n");
    }

    return 0;
}