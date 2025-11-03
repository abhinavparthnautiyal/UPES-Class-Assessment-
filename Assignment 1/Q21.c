/*write a program to enter marks and if marks are greater than or equal to 60 print pass otherwise fail by using ternary operator.*/
#include<stdio.h>
void main()
{
    int mrks;
    printf("Enter the marks you have scored:\n");
    scanf("%d", &mrks);
    (mrks >= 60)?printf("PASS"):printf("FAIL");
}