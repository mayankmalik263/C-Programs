#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    char sap_id[20];
    char marks[10];
};

int main()
{
    struct Student students[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter details of student %d:\n", i + 1);
        printf("Enter student name: ");
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; // remove newline character

        printf("Enter SAP ID: ");
        fgets(students[i].sap_id, 20, stdin);
        students[i].sap_id[strcspn(students[i].sap_id, "\n")] = 0; // remove newline character

        printf("Enter marks: ");
        fgets(students[i].marks, 10, stdin);
        students[i].marks[strcspn(students[i].marks, "\n")] = 0; // remove newline character
    }

    printf("Student Details:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("SAP ID: %s\n", students[i].sap_id);
        printf("Marks: %s\n", students[i].marks);
    }

    return 0;
}