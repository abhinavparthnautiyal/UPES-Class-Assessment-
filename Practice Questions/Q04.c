/*Create a program to find the maximum and minimum number in an array using functions*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=maxvalue(arr, n);
    int min=minvalue(arr, n);
    printf("The maximum value in the array is: %d\n", max);
    printf("The minimum value in the array is: %d\n", min);
}
int maxvalue(int array[], int size)
{
    int max=array[0];
    for(int i=1; i<size; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    return max;
}
int minvalue(int array[], int size)
{
    int min=array[0];
    for(int i=1; i<size; i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    return min;
}