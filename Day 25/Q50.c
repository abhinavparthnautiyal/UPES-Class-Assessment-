/*
Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
    
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.
*/
#include <stdio.h>
void main()
{
    int i, j, space;
    for(i = 1; i <= 5; i++) 
    {
        for(space = 1; space < i; space++) 
        {
            printf(" ");
        }
        for(j = 5; j >= i; j--) 
        {
            printf("*");
        }
        printf("\n");
    }
}