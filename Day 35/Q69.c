/*
Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40
*/
#include <stdio.h>
void main() 
{
    int n, i;
    int largest, secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = 0;  

    for (i = 0; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) 
        {
            secondLargest = arr[i];
        }
    }

    printf("Second largest element: %d\n", secondLargest);

}
