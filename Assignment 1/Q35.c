/*Write a program in C to swap two numbers using function.*/
#include <stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping: a = %d, b = %d\n",a,b);
    swap(&a,&b);
    printf("After swapping: a = %d, b = %d\n",a,b);
}
