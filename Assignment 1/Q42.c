/*Make this pattern:
    5
   45
  345
 2345
12345*/
#include <stdio.h>
void main()
{
    int i,j,k,rows=5;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
            printf(" ");
        for(k=rows-i+1;k<=5;k++)
            printf("%d",k);
        printf("\n");
    }
}
