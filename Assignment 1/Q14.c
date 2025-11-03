/*Write a C program to generate the following set of output.
a.  1
   2 3 
  4 5 6
 7 8 9 10
 b.    1
      1 1
     1 2 1  
    1 3 3 1
   1 4 6 4 1 
*/
#include<stdio.h>
void main()
{
    int count = 1;
    // Part a
    printf("Part a:\n");
    for(int i = 1; i <= 4; i++)
    {
        for(int space = 1; space <= (4-i); space++)
        {
            printf(" ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    // Part b
    printf("\nPart b:\n");
    for(int i = 0; i < 5; i++)
    {
        int number = 1;
        for(int space = 1; space <= 5-i ; space++)
        {
            printf(" ");
        }
        for(int j = 0; j <= i; j++)
        {
            printf("%d ", number);
            number = number * (i - j) / (j + 1);
        }
        printf("\n");
    }
}
