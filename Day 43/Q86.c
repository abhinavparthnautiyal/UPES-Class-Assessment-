/*
Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome
*/
#include <stdio.h>
void main() 
{
    char str[100], reversed[100];
    int len = 0, i = 0, isPalindrome = 1;

    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0') 
    {
        len++;
    }
    len--; 

    for (i = 0; i < len; i++) 
    {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0';

    for (i = 0; i < len; i++) 
    {
        if (str[i] != reversed[i]) 
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) 
    {
        printf("Palindrome");
    } 
    else 
    {
        printf("Not palindrome");
    }
}       