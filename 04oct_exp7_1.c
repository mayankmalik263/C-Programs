#include <stdio.h>

typedef struct
{
    float real;
    float imag;
} Complex;

Complex readComplex()
{
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

void writeComplex(Complex c)
{
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

Complex addComplex(Complex c1, Complex c2)
{
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

Complex subComplex(Complex c1, Complex c2)
{
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main()
{
    Complex c1, c2, sum, diff;

    printf("Enter first complex number - \n");
    c1 = readComplex();

    printf("Enter second complex number - \n");
    c2 = readComplex();

    sum = addComplex(c1, c2);
    diff = subComplex(c1, c2);

    printf("First complex number: ");
    writeComplex(c1);

    printf("Second complex number: ");
    writeComplex(c2);

    printf("Sum: ");
    writeComplex(sum);

    printf("Difference: ");
    writeComplex(diff);

    return 0;
}