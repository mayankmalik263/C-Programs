#include <stdio.h>
#include <math.h>

int is_valid_triangle(float a, float b, float c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int is_scalene(float a, float b, float c) {
    return (a != b) && (a != c) && (b != c);
}

int is_isosceles(float a, float b, float c) {
    return (a == b) || (a == c) || (b == c);
}

int is_equilateral(float a, float b, float c) {
    return (a == b) && (a == c);
}

int is_right_angled(float a, float b, float c) {
    float max = (a > b) ? (a > c) ? a : c : (b > c) ? b : c;
    float sq_max = max * max;
    float sq_sum = (a + b + c - max) * (a + b + c - max);
    /*
Here's a breakdown of how it works:

(a > b) is a conditional expression that checks if a is greater than b. If it is, then the expression evaluates to true.
If (a > b) is true, then the expression (a > c) is evaluated. If a is also greater than c, then the expression evaluates to true, and the value of a is assigned to max.
If (a > b) is false, then the expression (b > c) is evaluated. If b is greater than c, then the value of b is assigned to max.
If neither of the above conditions is true, then c is the maximum value, and its value is assigned to max.
In summary, this line of code finds the maximum value among a, b, and c using a series of conditional expressions, and assigns that value to the variable max. This is done to simplify the calculation of the square of the maximum side in the is_right_angled function.
    */
    return (sq_max == sq_sum);
}

int main() {
    float a, b, c;

    printf("Enter side a: ");
    scanf("%f", &a);

    printf("Enter side b: ");
    scanf("%f", &b);

    printf("Enter side c: ");
    scanf("%f", &c);

    if (!is_valid_triangle(a, b, c)) {
        printf("The triangle is not valid.\n");
        return 0;
    }

    if (is_equilateral(a, b, c)) {
        printf("The triangle is equilateral.\n");
    } else if (is_isosceles(a, b, c)) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }

    if (is_right_angled(a, b, c)) {
        printf("The triangle is right-angled.\n");
    } else {
        printf("The triangle is not right-angled.\n");
    }

    return 0;
}
