/*
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.
*/
#include <stdio.h>

void main()
{
    char name[100];
    int i;

    printf("Enter full name:\n");
    gets(name);

    if (name[0] != '\0')
    {
        if (name[0] >= 'a' && name[0] <= 'z')
            printf("%c.", name[0] - 32);
        else
            printf("%c.", name[0]);
    }

    i = 0;
    while (name[i] != '\0')
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
