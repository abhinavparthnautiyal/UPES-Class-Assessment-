/*Write the program to find the smallest no among three no entered by the user.*/
#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
        printf("%d is the smallest number.\n",a);
    else if(b<a && b<c)
        printf("%d is the smallest number.\n",b);
    else
        printf("%d is the smallest number.\n",c);
}
