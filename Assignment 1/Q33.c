/*Write the program to swap the value of two numbers.*/
#include <stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: a = %d, b = %d\n",a,b);
}
