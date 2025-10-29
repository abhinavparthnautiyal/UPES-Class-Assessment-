/*Write a program to convert binary no. to decimal no. using functions*/
#include<stdio.h>
#include<math.h>
int binarytodecimal(int binary)
{
    int decimal=0, base=1, rem, i=0;
    while (binary > 0)
    {
        rem = binary % 10;
        decimal +=rem*pow(2, i);
        i++;
        binary = binary / 10;
    }
    return decimal;
}
void main()
{
    int n;
    printf("Enter the binary number you want to convert to decimal: ");
    scanf("%d",&n);
    int decimal = binarytodecimal(n);
    printf("The decimal equivalent is: %d\n", decimal);
}
