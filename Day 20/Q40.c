/*
Q40: Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/
#include <stdio.h>

void main() 
{
    long long binary, onesComplement = 0;
    int digit, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        digit = binary % 10;  

        if (digit == 0)
            onesComplement += 1 * place; 
        else if (digit == 1)
            onesComplement += 0 * place; 
        else 
        {
            printf("Invalid binary number!\n");
            return 1; 
        }

        binary /= 10; 
        place *= 10; 
        
    }

    printf("1's Complement = %lld\n", onesComplement);
    
}
