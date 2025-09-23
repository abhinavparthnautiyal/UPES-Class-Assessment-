/*

Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
5
Output 1:
Area=78.54, Circumference=31.42

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include<stdio.h>
int main()
{
    float radius, area, circumference, pi=3.14159;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    area=pi*radius*radius;
    circumference=2*pi*radius;
    printf("Area = %.2f, Circumference = %.2f\n", area, circumference);
    return 0;
}
