#include <stdio.h>

int main()
{
    int x;
    FILE *file1 = fopen("E:/Programming College/priority.txt", "w");
    if (file1 == NULL)
    {
        printf("File could not be found\n");
    }
    fclose(file1);
    fscanf(file1, "%d", &x);
    return 0;
}