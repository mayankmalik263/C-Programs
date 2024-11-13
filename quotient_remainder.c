// number and divisor from the user and print the quotient and remainder
#include <stdio.h>

int main() {
    int num, divisor, quotient, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a divisor: ");
    scanf("%d", &divisor);

    quotient = num / divisor;
    remainder = num % divisor;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}

