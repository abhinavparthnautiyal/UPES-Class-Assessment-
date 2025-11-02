/*
Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams
*/
#include <stdio.h>
void main()
{
    char str1[100], str2[100];
    int i, count1[26] = {0}, count2[26] = {0}, flag = 0;

    printf("Enter first string:\n");
    gets(str1);

    printf("Enter second string:\n");
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            count1[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            count1[str1[i] - 'A']++;
    }

    for (i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            count2[str2[i] - 'a']++;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            count2[str2[i] - 'A']++;
    }

    for (i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Anagrams");
    else
        printf("Not anagrams");
}
