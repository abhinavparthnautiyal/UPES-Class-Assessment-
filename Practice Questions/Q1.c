/*Write a program in c to swap two numbers using functions*/
#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter the numbers you want to swap: ");
    scanf("%d %d", &a, &b);
    swap(a,b);
}
void swap(int x, int y)
{
    int temp;
    temp= x;
    x = y;
    y = temp;
    printf("After swapping: %d %d\n", x, y);
}