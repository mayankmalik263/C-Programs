// : Write a program to print the sum of a 2D matrice/array and separately print the results of rows and columns

#include <stdio.h>

int main()
{
    int rows, cols, i, j, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        sum = 0;
        for (j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i, sum);
    }
    for (j = 0; j < cols; j++)
    {
        sum = 0;
        for (i = 0; i < rows; i++)
        {
            sum += matrix[i][j];
        }
        printf("Sum of column %d: %d\n", j, sum);
    }
    return 0;
}