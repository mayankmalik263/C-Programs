#include <stdio.h>

int main()
{
    const double PI = 3.14159;
    double radius;
    printf("Enter the radius: ");
    scanf("%lf", &radius);
    double area = PI * radius * radius;
    printf("The area of the circle is: %lf", area);
    double Circumference = 2 * PI * radius;
    printf("\nThe Circumference of the circle is: %lf", Circumference);

    return 0;
}

