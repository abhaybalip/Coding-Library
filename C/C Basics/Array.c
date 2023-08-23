// c - Array
#include <stdio.h>
#include <string.h>
void main()
{
    // array collection of similar type data
    int array[7] = {1, 2, 3, 4, 5, 6};
    array[7] = 7;
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", array[i]);
    }

    // string array of character
    char s[] = {'n', 'a', 'm', 'e'};
    char n[5];
    printf("%s \n", s);

    // string input
    gets(n);
    // string output
    puts(n);
}