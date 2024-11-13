#include <stdio.h>

int main(){
    int p,n;
    printf("Enter the principal amount: ");
    scanf("%d",&p);
    printf("Enter the number of years: ");
    scanf("%d",&n);
    float r;
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    float simple_interest = p * r * n /100;
    printf("\nThe simple interest is: %.2f",simple_interest);
    
    return 0;

}

/*
    Another way to do it is to just put all the variables in one place
    int p,n;
    float r;
    printf("Enter the values of p,n,r: ");
    scanf("%d,%d,%f",&p,&n,&r);
    si = p*n*r/100;
    printf("%.2f",si);
    return 0;
    
*/