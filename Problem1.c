#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 1; i <= 500; i++)
    {
        int original = i;
        int sum = 0;
        while (original > 0)
        {
            int digit = original % 10;
            sum += pow(digit, 3);
            original /= 10;
        }
        if (i == sum)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

