/*1.	WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive, negative, odd, and even numbers in an array.*/\
#include <stdio.h>
void main() 
{
    int n, i;
    int pos = 0, neg = 0, odd = 0, even = 0;

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
        if(arr[i] > 0) 
            pos++;
        else if(arr[i] < 0) 
            neg++;

        if(arr[i] % 2 == 0) 
            even++;
        else 
            odd++;
    }

    printf("Count of positive numbers: %d\n", pos);
    printf("Count of negative numbers: %d\n", neg);
    printf("Count of even numbers: %d\n", even);
    printf("Count of odd numbers: %d\n", odd);
}