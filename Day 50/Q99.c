/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025
*/
#include <stdio.h>

void main()
{
    char date[20];
    int i = 0;

    printf("Enter date (dd/04/yyyy):\n");
    gets(date);

    printf("%c%c-", date[0], date[1]);

    if (date[3] == '0' && date[4] == '4')
        printf("Apr-");
    else
        printf("%c%c-", date[3], date[4]);

    i = 6;
    while (date[i] != '\0')
    {
        printf("%c", date[i]);
        i++;
    }
}
