/*Write a C program to calculate the area and perimeter of a rectangle based on its length
and width.*/
#include<stdio.h>
void main()
{
    int length, width, area, perimeter;
    printf("Enter the length and width of the rectangle: ");
    scanf("%d %d", &length, &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("The area of the rectangle is: %d\n", area);
    printf("The perimeter of the rectangle is: %d\n", perimeter);
}