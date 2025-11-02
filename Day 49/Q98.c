/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/
#include <stdio.h>

void main()
{
    char name[100];
    int i = 0, lastSpace = -1;

    printf("Enter full name:\n");
    gets(name);

    while (name[i] != '\0')
    {
        if (name[i] == ' ')
            lastSpace = i;
        i++;
    }

    i = 0;
    if (i <= lastSpace)
    {
  
        if (name[0] >= 'a' && name[0] <= 'z')
            printf("%c.", name[0] - 32);
        else
            printf("%c.", name[0]);

        while (name[i] != '\0' && i < lastSpace)
        {
            if (name[i] == ' ' && name[i+1] != '\0')
            {
                if (name[i+1] >= 'a' && name[i+1] <= 'z')
                    printf("%c.", name[i+1] - 32);
                else
                    printf("%c.", name[i+1]);
            }
            i++;
        }
    }

    if (lastSpace != -1)
    {
        printf(" ");
        i = lastSpace + 1;
        while (name[i] != '\0')
        {
            printf("%c", name[i]);
            i++;
        }
    }
}
