// cpp - Basic
// include header file
#include <iostream>
// using standard library function
using namespace std;
// main function
int main()
{
    // output stream with endline
    cout << "Hello World" << endl;

    // input stream
    int a;
    cin >> a;
    cout << a << endl;

    // c langage function / printf anf scanf
    printf("welcome");
    scanf("%d \n", &a);
    printf("%d \n", a);

    // data types
    // int ,short ,long ,double ,float ,array
    // char ,string
    int i;
    short int si;
    long int li;
    float f;
    int array[2];  // 1D array
    int arr[2][2]; // 2D array
    char c;
    string s;

    // constant data
    const int num = 10;

    // pointer - stores address of variable
    int *p = NULL;
    *p = num;
    void *ptr = NULL;
    ptr = (void *)num;

    // operator :
    // unary ,binary ,trinary, arithamatic ,logical ,assignment ,bitwise ,relational
    // operator works same in all language
}