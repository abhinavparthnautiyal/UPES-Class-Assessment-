/*Write a program to uses mathematical operator(add,sub,mul,div,mod) and print the
result.
*/
#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Addition = %d\n",a+b);
    printf("Subtraction = %d\n",a-b);
    printf("Multiplication = %d\n",a*b);
    if(b!=0)
    {
        printf("Division = %d\n",a/b);
        printf("Modulus = %d\n",a%b);
    }
    else
    {
        printf("Division and Modulus not possible (division by zero).\n");
    }
}
