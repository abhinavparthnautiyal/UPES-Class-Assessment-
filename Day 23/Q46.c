/*
Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****
*/
#include <stdio.h>
void main() 
{
    int i, j;
    for(i = 1; i <= 5; i++) 
    {
        for(j = 1; j <= 5; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
}