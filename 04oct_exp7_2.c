#include <stdio.h>
#include <string.h>

int main()
{
    const int numEmployees = 10;
    const float daPercentage = 0.52;

    char employeeNames[numEmployees][50]; // array to store employee names
    float basicPays[numEmployees];        // array to store basic pays
    float grossSalaries[numEmployees];    // array to store gross salaries

    // input employee data
    for (int i = 0; i < numEmployees; i++)
    {
        printf("Enter employee %d name: ", i + 1);
        fgets(employeeNames[i], 50, stdin);
        employeeNames[i][strlen(employeeNames[i]) - 1] = '\0'; // remove newline character

        printf("Enter employee %d basic pay: ", i + 1);
        char input[20];
        fgets(input, 20, stdin);
        sscanf(input, "%f", &basicPays[i]);
    }

    // compute gross salaries
    for (int i = 0; i < numEmployees; i++)
    {
        float da = basicPays[i] * daPercentage;
        grossSalaries[i] = basicPays[i] + da;
    }

    // print employee data
    for (int i = 0; i < numEmployees; i++)
    {
        printf("Employee %d: %s, Gross Salary: %.2f\n", i + 1, employeeNames[i], grossSalaries[i]);
    }

    return 0;
}