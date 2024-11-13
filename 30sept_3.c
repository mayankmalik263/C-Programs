#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int marks;
} Student;

int main()
{
    Student students[5];
    int highestMarks = 0;
    int highestMarksIndex = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name and marks of student %d: ", i + 1);
        char input[100];
        fgets(input, 100, stdin);

        sscanf(input, "%49s %d", students[i].name, &students[i].marks);

        if (students[i].marks > highestMarks)
        {
            highestMarks = students[i].marks;
            highestMarksIndex = i;
        }
    }

    printf("Student with highest marks: %s (%d)\n", students[highestMarksIndex].name, highestMarks);

    return 0;
}