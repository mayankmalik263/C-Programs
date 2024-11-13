#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int pos = 0, neg = 0, odd = 0, even = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("+ve nos: %d\n", pos);
    printf("-ve nos: %d\n", neg);
    printf("Odd nos: %d\n", odd);
    printf("Even nos: %d\n", even);
    return 0;
}