/*
Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1
*/
#include <stdio.h>
void main() 
{
    int n, i, key;
    int low, high, mid, found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements (in sorted order):\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) 
    {
        mid = (low + high) / 2;

        if (arr[mid] == key) 
        {
            found = mid;
            break;
        } 
        else if (arr[mid] < key)
            low = mid + 1; 
        else
            high = mid - 1; 
    }

    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");

}
