/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/
#include <stdio.h>

int main() {
    int num, temp, firstDigit, lastDigit, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    lastDigit = temp % 10;


    while (temp >= 10) 
    {
        temp /= 10;
        place *= 10;
    }
    firstDigit = temp;

    
    num = num % place;     
    num = num / 10;          

    int swapped = lastDigit*place + num*10 + firstDigit;

    printf("Number after swapping first and last digits = %d\n", swapped);
}
