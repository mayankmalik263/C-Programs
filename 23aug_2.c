#include <stdio.h>

int main() {
    float w, h_feet, h_inches, h_meters, bmi;

    printf("Enter weight (in kg): ");
    scanf("%f", &w);
    printf("Enter height (in feet and inches, separated by a space): ");
    scanf("%f %f", &h_feet, &h_inches);

    h_meters = (h_feet * 0.3048) + (h_inches * 0.0254);

    bmi = w / (h_meters * h_meters);

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
