/*
Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>
void main() 
{
    int i, j;

    for (i = 1; i <= 9; i += 2) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 7; i >= 1; i -= 2) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

}
