/*Write	a	program	to	print	the	following	pattern:
*
**
***
****
***** 
*/
#include <stdio.h>
void main()
{
    int i,j,rows=5;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}
