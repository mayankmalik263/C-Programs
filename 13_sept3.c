#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter the two numbers you wanna swap: ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("Swapped Numbers are: %d %d", a, b);
    return 0;
}

