/*
Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/
#include <stdio.h>
void main() 
{
    int n, i, num, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n+1];

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    for (pos = 0; pos < n; pos++) 
    {
        if (arr[pos] > num)
            break;
    }

    for (i = n; i > pos; i--) 
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = num;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}
