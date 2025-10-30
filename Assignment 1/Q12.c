/*Write a C program to enter numbers till the user wants. At the end, it should display the
count of positive, negative, and Zeroes entered.*/
#include <stdio.h>
void main()
{
    int n, i,  positive = 0, negative = 0, zero = 0;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);
    int numbers[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    scanf("%d", &numbers[i]);
    for (i = 0; i < n; i++)
    {
        if (numbers[i] > 0)
            positive++;
        else if (numbers[i] < 0)
            negative++;
        else
            zero++;
    }
    printf("\nCount of positive numbers: %d\n", positive);
    printf("Count of negative numbers: %d\n", negative);
    printf("Count of zeros: %d\n", zero);
}
