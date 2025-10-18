/*

Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/


#include<stdio.h>
int main()
{
 int num,rem, binary=0, place=1;
 printf("Enter the number whose binary equivalent you wish to find: ");
 scanf("%d", &num);
 while (num!=0)
{
    rem=num%2;
    binary+=rem*place;
    num=num/2;
    place*=10;
}
printf("The binary equivalent of the given number is: %d", binary);
}