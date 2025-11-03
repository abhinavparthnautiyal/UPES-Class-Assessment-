/*Write the program to calculate the factorial of the input no using functions.*/
#include<stdio.h>
int FACTORIAL(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
      fact=fact*i;
    }
    return fact;
}
void main()
{
    int num;
    printf("Enter the number whose factorial you want to find:\n");
    scanf("%d", &num);
    int fact=FACTORIAL(num);
    printf("The factorial of the required number is: %d", fact);
}
