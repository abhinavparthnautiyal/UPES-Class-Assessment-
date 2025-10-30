/*
Write a C program to compute the BMI Index of the person and print the BMI values as
per the following ranges. You can use the following formula to compute
BMI= weight(kgs)/Height(Mts)*Height(Mts).
BMI
Starvation <15
Anorexic 15.1 to 17.5
Underweight 17.6 to 18.5
Ideal 18.6 to 24.9
Overweight 25 to 25.9
Obese 30 to 39.9
Morbidity Obese 40.0Above
*/
#include <stdio.h>
void main()
{
    float weight, height, bmi;
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
    printf("The BMI category you fall under is:\n");
    if (bmi < 15.0)
        printf("Starvation\n");
    else if (bmi >= 15.0 && bmi < 17.5)
        printf("Anorexic\n");
    else if (bmi >= 17.5 && bmi < 18.5)
        printf("Underweight\n");
    else if (bmi >= 18.5 && bmi < 25.0)
        printf("Ideal\n");
    else if (bmi >= 25.0 && bmi < 30.0)
        printf("Overweight\n");
    else if (bmi >= 30.0 && bmi < 40.0)
        printf("Obese\n");
    else
        printf("Morbidly Obese\n");
}
