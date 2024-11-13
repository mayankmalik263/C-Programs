#include <stdio.h>

int main()
{
    int x1, y1, x2, y2, x3, y3;

    printf("Enter x1, y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2, y2: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter x3, y3: ");
    scanf("%d %d", &x3, &y3);

    int slope12 = (y2 - y1) * (x3 - x2) - (x2 - x1) * (y3 - y2);

    if (slope12 == 0)
    {
        printf("The three points are collinear.\n");
    }
    else
    {
        printf("The three points are not collinear.\n");
    }

    return 0;
}   