#include <stdio.h>

// Define an enum for the days of the week
enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

// Typedef the enum to create a new type
typedef enum Days Day;

int main() {
    Day today = MONDAY;
    printf("Today is ");
    
    switch(today) {
        case SUNDAY:
            printf("Sunday");
            break;
        case MONDAY:
            printf("Monday");
            break;
        case TUESDAY:
            printf("Tuesday");
            break;
        case WEDNESDAY:
            printf("Wednesday");
            break;
        case THURSDAY:
            printf("Thursday");
            break;
        case FRIDAY:
            printf("Friday");
            break;
        case SATURDAY:
            printf("Saturday");
            break;
        default:
            printf("Unknown day");
            break;
    }
    
    printf("\n");
    return 0;
}