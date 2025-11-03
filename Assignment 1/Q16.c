/*Write a C program to read a list of integers and store it in a single dimensional array. Also, count and display positive, negative, odd and even numbers in an array.*/
#include <stdio.h>
void main()
{
    int n,i;
    int positive=0,negative=0,even=0,odd=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d integers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nPositive Numbers: ");
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            printf("%d ",arr[i]);
            positive++;
        }
    }
    printf("\nCount = %d\n",positive);
    printf("\nNegative Numbers: ");
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            printf("%d ",arr[i]);
            negative++;
        }
    }
    printf("\nCount = %d\n",negative);
    printf("\nEven Numbers: ");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
            even++;
        }
    }
    printf("\nCount = %d\n",even);
    printf("\nOdd Numbers: ");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
            odd++;
        }
    }
    printf("\nCount = %d\n",odd);
}
