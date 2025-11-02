/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation
*/
#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100], str2[100], temp[200];
    
    printf("Enter first string:\n");
    gets(str1);

    printf("Enter second string:\n");
    gets(str2);

    if (strlen(str1) != strlen(str2))
    {
        printf("Not rotation");
        return;
    }

    strcpy(temp, str1);
    strcat(temp, str1);  

    if (strstr(temp, str2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");
}
