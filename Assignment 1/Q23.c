/*write the program to calculate the factorial of input number.*/
#include<stdio.h>
void main()
{
    int num, fact=1;
    printf("Enter the number whose factorial you want to find:\n");
    scanf("%d", &num);
   for(int i=1; i<=num; i++)
    {
       fact=fact*i;
    }
    printf("The factorial of the required number is: %d", fact);
}
