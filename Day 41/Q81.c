/*
Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1
*/

#include <stdio.h>
void main() 
{
    char str[1000000];
    int count = 0;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);  
    while (str[count] != '\0') 
    {
        count++;
    }
    printf("The total no. of characters in the given string is : %d", count);
}