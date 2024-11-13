#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int *array = (int *)malloc(n * sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        array[i - 1] = i;
    }
    printf("Array values: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}