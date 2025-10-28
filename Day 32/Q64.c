/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/
#include <stdio.h>
void main() 
{
    long long num;
    int digit, count[10] = {0}; 
    int maxCount = 0, mostFreq = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    while (num > 0) 
    {
        digit = num % 10;     
        count[digit]++;       
        num = num / 10;       
    }
 
    for (int i = 0; i < 10; i++) 
    {
        if (count[i] > maxCount) 
        {
            maxCount = count[i];
            mostFreq = i;
        }
    }

    printf("Most frequent digit: %d\n", mostFreq);
}
