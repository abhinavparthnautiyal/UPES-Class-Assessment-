/*

Q22: Write a program to find profit or loss percentage given cost price and selling price.

Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>
void main()
{
    float costprice, sellprice, profit, loss;
    printf("Enter cost price and selling price: ");
    scanf("%f%f", &costprice, &sellprice);
    profit = ((sellprice-costprice)/costprice)*100;
    loss = ((costprice-sellprice)/costprice)*100;
    if(sellprice > costprice)
        printf("Profit: %.2f\n", profit);
    else if(costprice > sellprice)
        printf("Loss: %.2f\n", loss);
    else
        printf("No Profit No Loss\n");  
}