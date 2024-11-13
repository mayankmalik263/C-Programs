#include <stdio.h>
// area of a circle using the void function instead of int function
void main(){
    float r, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    const float PI = 3.14159;
    area = PI * r * r;
    printf("The area of the circle is: %.3f",area);}
// This will print 2.50000 but if 5.0 was written as 5 then i would have printed 2.0000 only because both the values are int    
//     float x = 5.0/2;
//     printf("\n%f",x);
//     // loops

//     //for 
//     int num;
//     printf("\nEnter the number you want the table of: ");
//     scanf("%d", &num);
//     for (int i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", num, i, num * i);
    
//     }


//     //while
//     int num1 = 23456789;
//     int sum = 0;
//     while (num1 >0)
//     {
//         int x = num1%10;
//         num1 = num1/10;
//         sum += x;
//     }
//     printf("Sum = %d",sum);
    

// }


