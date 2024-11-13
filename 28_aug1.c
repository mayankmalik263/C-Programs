#include <stdio.h>

int main() {
    int num, pos = 0, neg = 0, zero = 0;
    char ch;

    do {
        printf("Enter a no: ");
        scanf("%d", &num);

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

    printf("\nCount of +ve numbers: %d\n", pos);
    printf("Count of -ve numbers: %d\n", neg);
    printf("Count of 0s: %d\n", zero);

    return 0;
}