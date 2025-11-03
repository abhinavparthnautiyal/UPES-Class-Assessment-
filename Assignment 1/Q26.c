/*Write the program to print sum of first n natural no entered by user.*/
#include <stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of first %d natural numbers = %d\n",n,sum);
}
