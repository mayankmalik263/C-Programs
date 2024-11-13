#include <stdio.h>

int main() {
    int year, day, total_days = 0;

    printf("Enter a year: ");
    scanf("%d", &year);

    for (int i = 1; i < year; i++) {
        if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
            total_days += 366;
        } else {
            total_days += 365; 
        }
    }

    day = (total_days + 1) % 7; 


    if (day == 0) {
        printf("January 1st, %d is Sunday\n", year);
    } else if (day == 1) {
        printf("January 1st, %d is Monday\n", year);
    } else if (day == 2) {
        printf("January 1st, %d is Tuesday\n", year);
    } else if (day == 3) {
        printf("January 1st, %d is Wednesday\n", year);
    } else if (day == 4) {
        printf("January 1st, %d is Thursday\n", year);
    } else if (day == 5) {
        printf("January 1st, %d is Friday\n", year);
    } else {
        printf("January 1st, %d is Saturday\n", year);
    }

    return 0;
}
/*
@ The formula used to calculate the day of the week is based on Zeller's Congruence, which is a mathematical formula that calculates the day of the week for any date.

- day = (year + (year / 4) - (year / 100) + (year / 400)) % 7

- This formula takes into account the year, century, and millennium to calculate the day of the week.
*/