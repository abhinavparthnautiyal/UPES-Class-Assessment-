/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s
*/
#include <stdio.h>
void main()
{
    char str[100];
    int i, j;
    int found = 0;

    printf("Enter the string:\n");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')  
        {
            for (j = i + 1; str[j] != '\0'; j++)
            {
                if (str[i] == str[j])
                {
                    printf("%c", str[i]);
                    found = 1;
                    break;
                }
            }
        }
        if (found)
            break;
    }

    if (!found)
        printf("No repeating character found");
}
