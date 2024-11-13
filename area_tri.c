#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int b;
    int c;
    printf("Enter the 1st side of triangle: ");
    scanf("%d",&a);
    printf("Enter the 2nd side of triangle: ");
    scanf("%d",&b);
    printf("Enter the 3rd side of triangle: ");
    scanf("%d",&c);
    int s = (a+b+c)/2;
    printf("The semi-perimeter of the triangle is: %d",s);
    int area = sqrt((s)*(s-a)*(s-b)*(s-c));
    printf("\nThe area of the triangle is: %d",area);
    return 0;
}