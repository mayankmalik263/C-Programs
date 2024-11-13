#include <stdio.h>

int main() {
    int a[10], count = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 10; i++) {
        int isPrime = 1;
        if (a[i] < 2)
            isPrime = 0;
        else {
            for (int j = 2; j * j <= a[i]; j++)
                if (a[i] % j == 0)
                    isPrime = 0;
        }
        count += isPrime;
    }

    printf("Number of prime numbers: %d\n", count);

    return 0;
}