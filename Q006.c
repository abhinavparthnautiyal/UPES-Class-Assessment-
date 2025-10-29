/*Write a program to calculate the factorial of a input number using functions*/
#include<stdio.h>
int factorial(int num)
{
    int fact = 1;
    for(int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
void main()
{
    int n;
    printf("Enter the number whose factorial you want to calculate: ");
    scanf("%d", &n);
    int fact = factorial(n); 
    printf("The factorial of %d is: %d\n", n, fact);   
}
