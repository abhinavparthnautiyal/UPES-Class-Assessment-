/* Write a Program to read a list of integers and store it in a single dimensional array.
Write a C program to find the frequency of a particular number in a list of integers.
*/
#include<stdio.h>
void main()
{
    int n,freq,count=0;
    printf("Enter the number of integers:\n");\
    scanf("%d", &n);
    int arr[n];
    printf("Enter the integers:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number whose frequency you want to find:\n");\
    scanf("%d", &freq);
    for(int j=0; j<=n; j++)
    {
        if(arr[j]==freq)
        count++;
    }
    printf("the frequency of the number is: %d", count);
}
