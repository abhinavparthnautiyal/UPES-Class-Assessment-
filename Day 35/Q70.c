/*
Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3
*/
#include <stdio.h>

void main() 
{
    int n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter positions to rotate: ");
    scanf("%d", &k);

    int temp[k];

    k = k % n;

    for (i = 0; i < k; i++) 
    {
        temp[i] = arr[n - k + i];
    }

    for (i = n - 1; i >= k; i--) 
    {
        arr[i] = arr[i - k];
    }

    for (i = 0; i < k; i++) 
    {
        arr[i] = temp[i];
    }

    printf("Rotated array:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}
