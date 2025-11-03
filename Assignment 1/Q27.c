/*Write the program to check whether the input no is palindrome no or not.*/
#include <stdio.h>
void main()
{
    int num,rev=0,rem,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(temp==rev)
        printf("The number is a Palindrome.\n");
    else
        printf("The number is not a Palindrome.\n");
}
