/*5.	Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit.
            Example of Ramanujan number: 1729
           12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)
*/
#include <stdio.h>
#include <math.h>
void main() 
{
    int limit, a, b, c, d;
    int ramanujan_found = 0;

    printf("Enter the limit up to which to find Ramanujan numbers: ");
    scanf("%d", &limit);

    printf("Ramanujan numbers up to %d are:\n", limit);
    for (int n = 1; n <= limit; n++) 
    {
        ramanujan_found = 0;
        for (a = 1; a <= cbrt(n); a++) 
        {
            for (b = a; b <= cbrt(n); b++) 
            {
                for (c = 1; c <= cbrt(n); c++) 
                {
                    for (d = c; d <= cbrt(n); d++) 
                    {
                        if ((a*a*a + b*b*b == n) && (c*c*c + d*d*d == n) && (a != c || b != d)) 
                        {
                            printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", n, a, b, c, d);
                            ramanujan_found = 1;
                        }
                    }
                }
            }
        }
    }

    if (!ramanujan_found) 
    {
        printf("No Ramanujan numbers found up to %d.\n", limit);
    }
}