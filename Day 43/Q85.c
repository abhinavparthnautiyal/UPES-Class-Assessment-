/*
Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/
#include <stdio.h>
void main() 
{
    char str[100], reversed[100];
    int len = 0, i=0;

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

    printf("%s", reversed);
}