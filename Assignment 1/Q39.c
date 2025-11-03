/*write the program to print the pattern
  *
 * *
* * * 
*/
#include <stdio.h>
void main()
{
    int i,j,rows=3;
    for(i=1;i<=rows;i++)
    {
        for(j=i;j<rows;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
}
