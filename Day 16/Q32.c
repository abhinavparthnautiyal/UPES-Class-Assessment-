/*

Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
void main()
{
    int num,temp,rev=0,rem;
    printf("Enter the number you want t6o check\n");
    scanf("%d", &num);
    temp=num;
    while(num!=0)
    {
     rem=num%10;
     rev=rev*10 + rem;
     num/=10;
    }
    if(temp==rev)
    {printf("The given number is a palindrome number");}
    else
    printf("The given number is not a palindrome number");                                         
}