/*Write a C program to add two numbers from user input.*/
#include<stdio.h>
void main()
{
    int num1, num2, sum=0;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
}