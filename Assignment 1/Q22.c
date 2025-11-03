/*write a program to count the no of digits of entered no.*/
#include<stdio.h>
void main()
{
    int num, count=0;
    printf("Enter the number:\n");
    scanf("%d", &num);
    while(num != 0)
    {
        num/=10;
        count++;
    }
    printf("The total no. of digits in your number is: %d", count);
}