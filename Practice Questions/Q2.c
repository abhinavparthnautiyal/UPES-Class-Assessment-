/*Write a program to convert decimal no. to binary no. using functions*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the decimal number you want to convert to binary: ");
    scanf("%d",&n);
    int binary = decimaltobinary(n);
    printf("The binary equivalent is: %d\n", binary);
}
decimaltobinary(int decimal)
{
    int binary=0, rem, i=1, rev=0;
    while (decimal > 0)
    {
        rem = decimal % 2;
        rev += rem * i;
        i *= 10;
        decimal /= 2;
    }
    int j=1;
    while (rev > 0)
    {
        rem = rev%10;
        binary +=rem*i;
        j*=10;
        rev /= 10;
    }
    return binary;
}