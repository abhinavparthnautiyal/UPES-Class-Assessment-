/*4.	According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.*/
#include <stdio.h>

int main() {
    int year, i, leapCount = 0, normalCount = 0, totalDays, dayCode;

    printf("Enter a year: ");
    scanf("%d", &year);

    for (i = 1; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            leapCount++;
        else
            normalCount++;
    }

    totalDays = normalCount * 1 + leapCount * 2;

    dayCode = totalDays % 7;
    printf("On 01/01/%d, it was ", year);

    switch (dayCode) 
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
