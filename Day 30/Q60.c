/*
Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1
*/
#include <stdio.h>
void main()
{
    int n, positiveCount = 0, negativeCount = 0, zeroCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i < n; i++) 
    {
        if (arr[i] > 0) 
        {
            positiveCount++;
        } 
        else if (arr[i] < 0) 
        {
            negativeCount++;
        } 
        else 
        {
            zeroCount++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positiveCount, negativeCount, zeroCount);
}