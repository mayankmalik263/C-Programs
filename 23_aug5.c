/*
@ Example Question: 
@ Write a C program to calculate the income tax for an individual based on the following tax slabs:

- Income up to ₹2,50,000: No tax
- Income from ₹2,50,001 to ₹5,00,000: 5% tax
- Income from ₹5,00,001 to ₹10,00,000: 20% tax
- Income above ₹10,00,000: 30% tax
@ The program should prompt the user to input their annual income, calculate the applicable tax, and display the tax amount.
*/

#include <stdio.h>

int main() {
    float income, tax = 0, surcharge = 0;

    printf("Enter your annual income: ");
    if (scanf("%f", &income) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    if (income < 0) {
        printf("Income cannot be negative\n");
        return 1;
    }
    if (income <= 250000) {
        tax = 0;
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = (income - 500000) * 0.20 + 250000 * 0.05;
    } else {
        tax = (income - 1000000) * 0.30 + 500000 * 0.20 + 250000 * 0.05;
    }
    tax += tax * 0.04; // add health and education cess (4% of the tax)
    if (income > 5000000 && income <= 10000000) {
        surcharge = tax * 0.10;
    } else if (income > 10000000 && income <= 20000000) {
        surcharge = tax * 0.15;
    } else if (income > 20000000 && income <= 50000000) {
        surcharge = tax * 0.25;
    } else if (income > 50000000) {
        surcharge = tax * 0.37;
    }tax += surcharge; // add surcharge to the tax
    printf("Your tax amount is: %.2f\n", tax);
    return 0;   
}