/*1.	WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.*/
#include <stdio.h>
void main() 
{
    int n, i;
    int first=0, second=0;

    printf("Enter the number of integers you will enter: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) 
    {
        if(arr[i] > first) 
        {
            second = first;
            first = arr[i];
        } 
        else if(arr[i]>second && arr[i]!=first) 
        {
            second = arr[i];
        }
    }
    {
        printf("The second largest integer is: %d\n", second);
    }
}