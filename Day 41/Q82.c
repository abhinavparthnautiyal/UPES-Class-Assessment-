/*
Q82: Print each character of a string on a new line.

Sample Test Cases:
Input 1:
Hi
Output 1:
H
i
*/
#include<stdio.h>
void main()
{
    char str[100],i=0;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
}