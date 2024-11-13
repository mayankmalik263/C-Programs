#include <stdio.h>

// Recursive FACT function
int FACT_recursive(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * FACT_recursive(num - 1);
    }
}

// Non-recursive FACT function
int FACT_non_recursive(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

// Binomial coefficient function
int BINOMIAL_COEFFICIENT(int n, int r) {
    return FACT_non_recursive(n) / (FACT_non_recursive(r) * FACT_non_recursive(n - r));
}

int main() {
    printf("Binomial Coefficient Calculator\n");
    printf("-------------------------------\n");

    for (int n = 0; n <= 10; n++) {
        for (int r = 0; r <= n; r++) {
            printf("C(%d, %d) = %d\n", n, r, BINOMIAL_COEFFICIENT(n, r));
        }
        printf("\n");
    }

    return 0;
}

/*
@ Recursive Function

The recursive function FACT can be implemented as follows:

int FACT(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * FACT(num - 1); //calls itself
    }
}
This function uses the recursive formula FACT(n) = n * FACT(n-1) to calculate the factorial of a given number num.

@ Non-Recursive Function

The non-recursive function FACT can be implemented using a loop:

int FACT(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

This function uses a loop to calculate the factorial of a given number num.

@ Binomial Coefficient Function

The binomial coefficient can be calculated using the formula C(n, r) = FACT(n) / (FACT(r) * FACT(n-r)). Here's the implementation:

int BINOMIAL_COEFFICIENT(int n, int r) {
    return FACT(n) / (FACT(r) * FACT(n - r));
}

*/