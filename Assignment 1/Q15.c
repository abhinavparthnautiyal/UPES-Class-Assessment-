/*Write a C program to print the second largest integer in a list of integers Write a C program to read a list of integers and store it in a single dimensional.*/
#include <stdio.h>
void main()
{
    int n, i;
    printf("Enter the number of integers in the list: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int firstlargest=arr[0],secondlargest=arr[0];
    for(i=0; i < n; i++)
    {
        if(arr[i]>firstlargest)
        {
            secondlargest=firstlargest;
            firstlargest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i] != firstlargest)
        {
            secondlargest = arr[i];
        }
        
    }
    printf("The second largest number in the array is: %d", secondlargest);
} 