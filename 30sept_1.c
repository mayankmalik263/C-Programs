#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    long long sap_id;
    float marks;
};

int main()
{
    struct Student student;

    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strlen(student.name) - 1] = '\0';

    printf("Enter SAP ID: ");
    scanf("%lld", &student.sap_id);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("SAP ID: %lld\n", student.sap_id);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
