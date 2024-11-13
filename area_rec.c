#include <stdio.h>

int main(){
    int l;
    int b;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d",&b);
    int perimeter = 2*(l+b);
    printf("The perimeter of the rectangle is: %d units",perimeter);
    int area = l*b;
    printf("\nThe area of the rectangle is: %d sqr units",area);
    return 0;


}