#include <stdio.h>

int is_prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    else if (n % 2 == 0)
    {
        return 0;
    }

    for (int i = 3; i <= n / i; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter a natural number: ");
    scanf("%d", &num);
    if (is_prime(num))
    {
        printf("%d is a prime number.\n", num);
    }

    else
    {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}