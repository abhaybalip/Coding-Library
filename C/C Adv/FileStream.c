#include <stdio.h>
int main()
{
    // opening file
    FILE *f1 = fopen("test.txt", "w+");
    FILE *f2 = fopen("test.txt", "r+");

    int n = 10, n2, n3;
    char c = 'A', c2, c3;

    // write to file
    fprintf(f1, "%d %c", n, c);

    // Move the file pointer to the beginning of the file
    fseek(f1, 0, SEEK_SET);

    // read from file
    fscanf(f1, "%d %c", &n2, &c2);

    // print the data read from the file
    printf("Data Read from file: %d %c\n", n2, c2);

    // close file
    fclose(f1);

    // string method for file
    f1 = fopen("test2.txt", "w+");
    fputs("Hello World", f1);
    fclose(f1);

    f2 = fopen("test2.txt", "r+");
    char str[12]; // array to store the string

    // read string from file
    fgets(str, sizeof(str), f2);
    printf("String Read from file: %s\n", str);

    // write array to file
    char str2[] = "Hello User";
    fwrite(str2, 1, sizeof(str2), f2);

    // Move the file pointer to the beginning of the file
    fseek(f2, 0, SEEK_SET);

    // read array from file
    char str3[sizeof(str2)];
    fread(str3, 1, sizeof(str2), f2);
    printf("Array Read from file: %s\n", str3);

    fclose(f2);

    return 0;
}
