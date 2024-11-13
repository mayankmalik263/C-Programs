#include <stdio.h>

typedef struct {
    float real;
    float imaginary;
} Complex;

int main() {
    Complex c1, c2, sum;

    printf("Enter the real part of the first complex number: ");
    scanf("%f", &c1.real);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%f", &c1.imaginary);

    printf("Enter the real part of the second complex number: ");
    scanf("%f", &c2.real);
    printf("Enter the imaginary part of the second complex number: ");
    scanf("%f", &c2.imaginary);

    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;

    printf("First complex number: %.2f + %.2fi\n", c1.real, c1.imaginary);
    printf("Second complex number: %.2f + %.2fi\n", c2.real, c2.imaginary);
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imaginary);

    return 0;
}