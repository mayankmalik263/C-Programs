#include <stdio.h>

int main(){
    int km;
    double m;
    double ft;
    double inch;
    double cm;
    printf("Enter the distance between the cities in km: ");
    scanf("%d",&km);
    m = km * 1000;
    cm = m * 100;
    inch = cm/2.54;
    ft = inch/12;
    printf("Distance in meters: %.2lf m\n",m);
    printf("Distance in feet: %.2lf ft\n",ft);
    printf("Distance in inches: %.2lf inches\n",inch);
    printf("Distance in centimeters: %.2lf cm\n",cm);

    return 0;
}