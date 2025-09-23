/*

Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<math.h>
#include<stdio.h>
void main()
{
  int principle, rate, time;
    printf("Enter the value of principle amount, rate(in %) and time(in years): ");
    scanf("%d%d%d", &principle, &rate, &time);
    float simple_interest=(principle*rate*time)/100;
    float compound_interest=principle*(pow((1+(rate/100.0)),time))-principle;
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simple_interest, compound_interest);
}