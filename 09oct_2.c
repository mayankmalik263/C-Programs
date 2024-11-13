#include <stdio.h>

int main()
{
    int x = {10, 20, 30};
    int *p = &x;
    printf("%d\n", x);
    int *ptr = x;
    printf("%d\n", x);
    return 0;
}