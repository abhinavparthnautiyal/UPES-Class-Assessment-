/*3.	WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.3.	WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.3.	WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers./*3.	WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.*/
#include <stdio.h>
void main()
{
    int n, i, num, freq = 0;

    printf("Enter the number of integers you will enter: ");
    scanf("%d", &n);

    int arr[n];                        

    printf("Enter %d integers:\n", n);
    for(i=0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++) 
    {
        if(arr[i] == num) 
            freq++;
    }

    printf("The frequency of %d is: %d\n", num, freq);
}