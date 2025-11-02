/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/
#include <stdio.h>

void main()
{
    char str[200];
    int i = 0, start, end, j;
    
    printf("Enter a sentence:\n");
    gets(str);

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            start = i;
            while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
                i++;
            end = i - 1;

            while (start < end)
            {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
        }
        else
        {
            i++;
        }
    }

    printf("%s", str);
}
