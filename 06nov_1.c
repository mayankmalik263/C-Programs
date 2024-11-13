#include <stdio.h>
#include <math.h>

double area(char Shape, double x, double y, double z) {
    if (Shape == 'T') {
        double s = (x + y + z) / 2;
        return sqrt(s * (s - x) * (s - y) * (s - z));
    } else if (Shape == 'R') {
        return x * y;
    } else if (Shape == 'S') {
        return x * x;
    }
    return -1;
}

int main() {
    char Shape;
    double x, y, z = 0;

    printf("Enter (T for Triangle, R for Rectangle, S for Square): ");
    scanf(" %c", &Shape);

    if (Shape == 'T') {
        printf("Enter the lengths of the three sides: ");
        scanf("%lf %lf %lf", &x, &y, &z);
    } else if (Shape == 'R') {
        printf("Enter length and width: ");
        scanf("%lf %lf", &x, &y);
    } else if (Shape == 'S') {
        printf("Enter side length: ");
        scanf("%lf", &x);
    } else {
        printf("Invalid shape\n");
        return 1;
    }

    double areaValue = area(Shape, x, y, z);
    if (areaValue < 0) {
        printf("Error calculating area.\n");
    } else {
        printf("Area = %.2f\n", areaValue);
    }

    return 0;
}