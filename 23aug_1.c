#include <stdio.h>

int main() {
    float w, h, bmi;

    printf("Enter weight (in kg): ");
    scanf("%f", &w);
    printf("Enter height (in meters): ");
    scanf("%f", &h);

    bmi = w / (h * h);

    if (bmi < 15) {
        printf("Starvation: BMI = %.2f\n", bmi);
    } else if (bmi < 17.6) {
        printf("Anorexic: BMI = %.2f\n", bmi);
    } else if (bmi < 18.6) {
        printf("Underweight: BMI = %.2f\n", bmi);
    } else if (bmi < 25) {
        printf("Ideal: BMI = %.2f\n", bmi);
    } else if (bmi < 30) {
        printf("Overweight: BMI = %.2f\n", bmi);
    } else if (bmi < 40) {
        printf("Obese: BMI = %.2f\n", bmi);
    } else if(bmi >= 40){
        printf("Morbidity Obese: BMI = %.2f\n", bmi);
    }

    return 0;
}