/*According to the Gregorian calendar, it was Monday on the date 01/01/01. If Any year is
input through the keyboard write a program to find out what is the day on 1st January of
this year*/
#include <stdio.h>
void main()
{
    int year, total_days = 0, day;
    printf("Enter the year: ");
    scanf("%d", &year);
    for (int y = 1; y < year; y++)
    {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            total_days += 366;
        else
            total_days += 365;
    }
    day = total_days % 7;
    printf("Day on 1st January %d is: ", year);
    switch (day)
    {
        case 0: printf("Monday\n"); break;
        case 1: printf("Tuesday\n"); break;
        case 2: printf("Wednesday\n"); break;
        case 3: printf("Thursday\n"); break;
        case 4: printf("Friday\n"); break;
        case 5: printf("Saturday\n"); break;
        case 6: printf("Sunday\n"); break;
    }
}
