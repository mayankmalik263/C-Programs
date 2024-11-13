#include <stdio.h>

int main(){
    double x;
    double y;
    printf("Enter your first Number: ");
    scanf("%lf", &x);
    printf("Enter your second Number: ");
    scanf("%lf",&y);
    printf("Sum of %.2lf and %.2lf is %.2lf\n", x, y, x+y);
    return 0;
}