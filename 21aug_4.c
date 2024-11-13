#include <stdio.h>

int main()
{
    int a = 0, b = 1, temp;
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("%d %d ", a, b);
    for (int i = 2; i < n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
        if (temp > 400)
        {
            break;
        }
        printf("%d ", temp);
    }
    printf("\n");

    return 0;
}
