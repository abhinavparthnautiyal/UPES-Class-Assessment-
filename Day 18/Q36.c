/*
Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

void main() 
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int hcf = findHCF(num1, num2);
    printf("HCF (GCD) of %d and %d is %d\n", num1, num2, hcf);
}

int findHCF(int a, int b) 
{
    while (b!=0) 
    {
        int temp = b; 
        b = a % b;
        a = temp;
    }
    return a;
}

