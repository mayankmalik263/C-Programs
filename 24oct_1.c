#include <stdio.h>
#include <string.h>

int main() {
    const int maxStudents = 100;
    const int nameLength = 50;
    int n, i;
    char names[maxStudents][nameLength];
    int marks[maxStudents];
    int highestIndex = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    if (n <= 0 || n > maxStudents) {
        printf("Invalid number of students. Please enter a number between 1 and %d.\n", maxStudents);
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%49s", names[i]); 
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (i = 1; i < n; i++) {
        if (marks[i] > marks[highestIndex]) {
            highestIndex = i;
        }
    }
    printf("The student with the highest marks is: %s\n", names[highestIndex]);

    return 0;
}