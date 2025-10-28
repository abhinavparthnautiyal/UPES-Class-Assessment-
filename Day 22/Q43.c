/*
Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number
*/
#include <stdio.h>

void main() 
{
    int num, temp, digit, sum = 0, fact, i;

  
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        digit = temp % 10; 

        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;    
        temp /= 10;          
    }

    if (sum == num)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

}
