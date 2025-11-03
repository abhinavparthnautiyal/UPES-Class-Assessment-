/*Write a program to fin maximum Cminimum value in an array using function.*/
#include <stdio.h>
int findMax(int arr[], int n)
{
    int i, max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
int findMin(int arr[], int n)
{
    int i, min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}
void main()
{
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Maximum value = %d\n",findMax(arr,n));
    printf("Minimum value = %d\n",findMin(arr,n));
}
