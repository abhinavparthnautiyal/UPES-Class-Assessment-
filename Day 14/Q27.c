/*

Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include<stdio.h>
void main()
{
    int n, i=1, j=1, sum=0;
    printf("Enter the value of number of odd numbers you want to sum: ");
    scanf("%d", &n);
    do
    {
        if(j%2!= 0)
        {
            sum += j;
            i++;
        }
        j++;
    } while(i <= n);
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);
}

