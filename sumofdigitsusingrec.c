#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return  0;
    }
    return (n % 10 + sumOfDigits(n / 10));
}

int main() {
    int num, sum;

    printf("Enter any number to find sum of digits: ");
    scanf("%d", &num);

    sum = sumOfDigits(num);

    printf("Sum of digits of %d = %d\n", num, sum);

    return 0;
}

