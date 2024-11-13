#include <stdio.h>
#include <stdlib.h>

struct employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    int n;

    // Ask the user for the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n employees
    struct employee *employees = (struct employee *)malloc(n * sizeof(struct employee));
    if (employees == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program if memory allocation fails
    }

    // Initialize each employee's details
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Display the employee details
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee ID: %d\n", employees[i].emp_id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("--------------------------\n");
    }

    // Free the allocated memory
    free(employees);

    return 0;
}