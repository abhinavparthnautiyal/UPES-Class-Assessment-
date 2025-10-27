/*

Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong


*/
#include<stdio.h>
#include<math.h>
void main()
{
int num,rem, arm,places=0,tem;
printf("Please enter the number you want to check whether it is armstrong number or not: \n");
scanf("%d", &num);
tem=num;
while(tem!=0)
{
    tem=tem/10;
    places++;
}
tem=num, arm=0;
while(tem!=0)
{
    rem=tem%10;
    arm = arm + (int)pow(rem, places);
    tem=tem/10;
}
if(arm == num)
printf("The given number is an armstrong number");
else
printf("The given number is not an armstrong number");
}

