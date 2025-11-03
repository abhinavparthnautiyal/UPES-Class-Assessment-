/*Write a program to calculate the area and circumference of a circle given its radius.*/
#include <stdio.h>
void main()
{
    float r,area,circumference;
    printf("Enter radius of the circle: ");
    scanf("%f",&r);
    area=(22/7)*r*r;
    circumference=2*(22./7)*r;
    printf("Area = %.2f\n",area);
    printf("Circumference = %.2f\n",circumference);
}
