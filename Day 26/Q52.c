/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>
void main() 
{
    int i, j;
    int stars;

    for (stars = 1; stars <= 5; stars += 2) {
        for (i = 1; i <= stars; i++) 
        {
            printf("*\n");
        }
        printf("\n"); 
    }

    for (stars = 3; stars >= 1; stars -= 2) {
        for (i = 1; i <= stars; i++) {
            printf("*\n");
        }
        printf("\n");
    }

}
