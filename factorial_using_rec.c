#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    long long result;

    printf("Enter a positive integer to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of negative numbers is not defined.\n");
        return 1;
    }

    result = factorial(num);

    printf("Factorial of %d = %lld\n", num, result);

    return 0;
}

