/*

Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include<stdio.h>
void main()
{
 int num,check, prime=0;
 printf("Enter the number you want to check: ");
 scanf("%d", &num);
 for(int i=2; i<num; i++)
 {
  check=num%i;
  if(check == 0)
  prime++;
 }
 if(prime==0)
 printf("The given number is prime");
 else
 printf("The given number is not prime");

}