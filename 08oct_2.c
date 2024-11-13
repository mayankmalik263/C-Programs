#include <stdio.h>
#include <stdlib.h>

char *firstNames[] = {"Rahul", "Priya", "Rohan", "Neha", "Aryan", "Aisha", "Kunal", "Sania", "Vishal", "Tanvi"};

char *lastNames[] = {"Sharma", "Gupta", "Kumar", "Singh", "Jain", "Mehta", "Chopra", "Parekh", "Desai", "Patel"};

int main()
{
    srand(123); 

    for (int i = 0; i < 100; i++)
    {
        int firstNameIndex = rand() % 10; 
        int lastNameIndex = rand() % 10; 
        int salary = rand() % 20000 + 30000;

        printf("Majdoor Number %d: %s %s, Rs. %d\n", i + 1, firstNames[firstNameIndex], lastNames[lastNameIndex], salary);
    }

    return 0;
}