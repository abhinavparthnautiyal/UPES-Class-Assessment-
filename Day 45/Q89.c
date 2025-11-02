/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2
*/
#include<stdio.h>
void main()
{
    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to find frequency:\n");
    scanf("%c", &ch);

    while (str[i] != '\0') 
    {
        if (str[i] == ch) 
        {
            count++;
        }
        i++;
    }

    printf("Frequency of '%c' = %d", ch, count);
}