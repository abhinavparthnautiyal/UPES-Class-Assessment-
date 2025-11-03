/*Make this pattern:
*****
 ****
  ***
   **
    *    */
#include <stdio.h>
void main() 
{
    int i, j;
    int rows = 5;
    for(i = 1; i <= 5; i++) 
    {   for(int k=0; k<=(i-1); k++)
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