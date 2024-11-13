#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(123);
    for (int i = 0; i < 100; i++)
        printf("Employee %d: Rs. %d\n", i + 1, rand() % 20000 + 30000);
    return 0;
}