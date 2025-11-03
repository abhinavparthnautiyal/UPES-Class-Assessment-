/*Write a C program to print the multiplication table of the number entered by the user. It should be in the correct formatting.
Num * 1 = Num*/
#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number whose table you want to find:\n");
    scanf("%d",&num);
    for(int i=1;i <= 10;i++)
    {
        printf("%d X %d = %d \n", num, i, i*num);
    }
}
