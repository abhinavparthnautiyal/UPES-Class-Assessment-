/*Write a program to check whether a number is prime or not using function*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number you want to check if it is prime or not: ");
    scanf("%d",&n);
    int ans = prime(n);
}
int prime(int num)
{
    int i, flag=0;
    for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
       {
        printf("%d is a prime number\n", num);
        return 1;
       }
    else
        printf("%d is not a prime number\n", num);
        return 0;
}