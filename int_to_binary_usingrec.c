#include <stdio.h>

void convertToBinary(int n) {
    if (n > 1) {
        convertToBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Binary representation: ");
    convertToBinary(num);
    printf("\n");
    return 0;
}

