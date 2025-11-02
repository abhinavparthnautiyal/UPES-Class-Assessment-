/*
Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn
*/
#include <stdio.h>
void main() 
{
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') 
    {
        char ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) 
        {
            result[j] = ch;
            j++;
        }
        i++;
    }
    result[j] = '\0';

    printf("%s", result);
}