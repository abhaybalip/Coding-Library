// File Management
#include <stdio.h>
#include <stdlib.h>
int main()
{

    // Opening File :
    FILE *file = fopen("TestFile.txt", "a+");
    // Closing File :
    fclose(file);

    file = fopen("TestFile.txt", "w+");
    int array[] = {0, 1, 2, 3, 4};
    char ch = 'A';

    size_t elements = fwrite(array, sizeof(int), sizeof(array) / sizeof(int), file);
    // elements = fwrite(&ch, sizeof(char), 1, file);

    fclose(file);

    file = fopen("TestFile.txt", "r");
    int *arr = malloc(sizeof(int) * (sizeof(array) / sizeof(int)));
    elements = fread(arr, sizeof(int), sizeof(array) / sizeof(int), file);
    fclose(file);

    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        printf("%d ", arr[i]);
    }

    // File index pointer
    // file pointer , offset , origin
    // origin : seek_set , seek_cur , seek_end
    fseek(file, 0, SEEK_SET);

    // delete file
    remove("TestFile.txt");
    free(arr);
    fclose(file);

    return 0;
}