#include <stdio.h>

int main() {
    float principal, rate, time, ci;
    int n;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    printf("Enter number of times interest applied per time period: ");
    scanf("%d", &n);

    ci = principal;

    for (int i = 0; i < n * time; i++) {
        ci = ci * (1 + rate / 100 / n);
    }

    printf("Compound interest: %.2f\n", ci);

    return 0;
}