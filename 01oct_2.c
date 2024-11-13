#include <stdio.h>
enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main()
{
    enum Day today = TUESDAY;
    printf("Today is %d\n", today);
    return 0;
}