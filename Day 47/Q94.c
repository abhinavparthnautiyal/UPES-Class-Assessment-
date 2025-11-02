/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/
#include <stdio.h>
void main()
{
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence:\n");
    gets(str);

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            word[j++] = str[i];
        }
        else
        {
            word[j] = '\0';
            len = j;
            if (len > maxLen)
            {
                maxLen = len;
                int k;
                for (k = 0; k <= len; k++)
                    longest[k] = word[k];
            }
            j = 0;
        }
        i++;
    }

    word[j] = '\0';
    len = j;
    if (len > maxLen)
    {
        int k;
        for (k = 0; k <= len; k++)
            longest[k] = word[k];
    }

    printf("%s", longest);
}
