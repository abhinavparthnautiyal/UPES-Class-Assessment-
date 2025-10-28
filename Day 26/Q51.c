/*
Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345
*/
#include <stdio.h>
void main() 
{
    int n = 5; 

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= (n-i); j++) 
        {
            printf(" ");
        }

        for (int j = n - i + 1; j <= n; j++) 
        {
            printf("%d", j);
        }

        printf("\n");
    }
}