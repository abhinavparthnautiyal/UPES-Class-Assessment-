/*1.	WAP to take check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.*/
#include <stdio.h>
void main()
{
    int side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%d %d %d", &side1, &side2, &side3);
   
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) 
    {
        printf("The triangle is valid.\n");
        
        if (side1 == side2 && side2 == side3) 
        {
            printf("The triangle is Equilateral.\n");
        } 
        else if (side1 == side2 || side2 == side3 || side1 == side3) 
        {
            printf("The triangle is Isosceles.\n");
        } 
        else if (((side1*side1) + (side2*side2) == (side3*side3)) ||  
                 ((side1*side1) + (side3*side3) == (side2*side2)) ||
                 (side2*side2) + (side3*side3) == (side1*side1))
    {
            printf("The triangle is Right Angled.\n");
        } 
        else 
        {
            printf("The triangle is Scalene.\n");
        }
    } 
    else {
        printf("The triangle is not valid.\n");
    }
}