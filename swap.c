#include <stdio.h>
#include <stdint.h>


int main() {
    int a;
    int b;
    printf("Enter the Numbers: ");
    scanf("%d %d", &a, &b);
    a = a + b;             
    b = a - b;
    a = a - b;

    printf("Value of a is %d",a);
    printf("\nValue of b is %d",b);

    return 0;
}

