/*

Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include<stdio.h>
void main()
{
    int total_seconds, hours, minutes, seconds;
    printf("Enter the total time in seconds: ");
    scanf("%d", &total_seconds);
    hours=total_seconds/3600;
    minutes=(total_seconds%3600)/60;
    seconds=(total_seconds%3600)%60;
    printf("%d:%d:%d ", hours, minutes, seconds);
}