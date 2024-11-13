#include <stdio.h>
#include <math.h>

float side1, side2, side3;

float calculateArea(float a, float b, float c) {
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main() {
    printf("Enter the first side of the triangle: ");
    if (scanf("%f", &side1) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter the second side of the triangle: ");
    if (scanf("%f", &side2) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter the third side of the triangle: ");
    if (scanf("%f", &side3) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    float area = calculateArea(side1, side2, side3);

    printf("The area of the triangle is: %f\n", area);

    return 0;
}

