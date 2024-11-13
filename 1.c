#include <stdio.h>

int main()
{
    int matrix1[3][3];

    printf("Enter the 9 elements of matrix1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nThe 9 elements of matrix1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n"); // Print a newline after each row
    }
    return 0;
}