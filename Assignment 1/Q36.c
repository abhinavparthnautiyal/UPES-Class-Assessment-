/*Write a program to convert decimal to binary using function.*/
#include <stdio.h>
void decimalToBinary(int n)
{
    int binary[32], i=0, j;
    if(n==0)
    {
        printf("0");
        return;
    }
    while(n>0)
    {
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
}
void main()
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d",&num);
    printf("Binary representation: ");
    decimalToBinary(num);
    printf("\n");
}
