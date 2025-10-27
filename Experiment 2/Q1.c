/*1.	WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.*/
#include <stdio.h>  
void main() 
{
    int length, width, area, perimeter;
    
    printf("Enter length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter width of the rectangle: ");
    scanf("%d", &width);
   
    area = length * width;
    perimeter = 2 * (length + width);
    
    printf("Area of the rectangle: %d\n", area);
    printf("Perimeter of the rectangle: %d\n", perimeter);
}