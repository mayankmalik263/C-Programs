#include <stdio.h>

int main(){
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;
    int aggr;
    float percent;
    printf("Enter the marks of 1st subject: ");
    scanf("%d",&m1);
    printf("Enter the marks of 2nd subject: ");
    scanf("%d",&m2);
    printf("Enter the marks of 3rd subject: ");
    scanf("%d",&m3);
    printf("Enter the marks of 4th subject: ");
    scanf("%d",&m4);
    printf("Enter the marks of 5th subject: ");
    scanf("%d",&m5);
    aggr = (m1 + m2 + m3 + m4 + m5);
    printf("The aggregate marks are: %d",aggr);
    percent = (aggr/5);
    printf("\nThe percentage of the marks are: %0.1f ",percent);
    return 0;
}