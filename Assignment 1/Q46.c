/*Write a program to sort the array in descending order.*/
#include <stdio.h>
void main() 
{
    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < n - 1; i++)
       { for(j = i + 1; j < n; j++)
           { if(arr[i] < arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
               }  
              }
                }
    printf("Array in descending order:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
