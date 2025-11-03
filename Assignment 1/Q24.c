/*write the program to generate fibonacci series upto n terms.*/
#include<stdio.h>
void main()
{
    int num;
    int a=0,b=1,c;
    printf("enter the terms upto which you want to generate the fibonacci series: \n");
    scanf("%d", &num);
    printf("The fibonacci series upto %dth term is as follows: 0, 1,");
    for(int i = 1; i <= num-2; i++)
    {
       c=a+b;
       printf(" %d,", c);
       a=b;
       b=c;
    }
}
