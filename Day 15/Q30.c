/*

Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
void main()
{
    int num, reversed=0, remainder=0;
    printf("Enter the number you want to reverse: ");
    scanf("%d", &num);
    while(num!=0)
    {
    remainder=num%10;
    reversed=reversed*10+remainder;
    num/=10;
    }
    printf("Reversed number: %d\n", reversed);
}