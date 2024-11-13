#include <stdio.h>

int main()
{
    char c1 = 'A';
    char c2 = 'a';
    c1 = c1 + c2;
    c2 = c1 - c2;
    c1 = c1 - c2;

    printf("value of 'A' is: %c\n", c1);
    printf("value of 'a' is: %c\n", c2);

    return 0;
}
