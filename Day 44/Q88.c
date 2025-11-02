/*
Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world
*/
#include <stdio.h>
void main()
{
    char str[100];
    int i = 0;

    printf("Enter the string:\n");
    gets(str);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }
        i++;
    }

    printf("%s", str);
}
