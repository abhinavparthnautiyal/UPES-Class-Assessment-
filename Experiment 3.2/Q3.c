/* 3.	WAP to generate the following set of output.
a.	
  1
 2 3
4 5 6
b.	 
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/
#include <stdio.h>

void pattern1() {
    int num = 1;
    for(int i = 1; i <= 3; i++) 
    {
        for(int j = 1; j <= 3-i; j++) 
         {
            printf(" ");
         }
        for(int j = 1; j <= i; j++) 
        {
            printf("%d ", num++);
        }
        printf("\n");
    }
}

void pattern2() {
    for(int i = 1; i <= 5; i++) 
    {
        
        for(int j = 1; j <= 5-i; j++) 
        {
            printf(" ");
        }

        int coef = 1;
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", coef);
            coef = coef * (i-j) / j;
        }
        printf("\n");
    }
}

int main() {
    printf("Pattern (a):\n");
    pattern1();
    
    printf("\nPattern (b):\n");
    pattern2();
    
    return 0;
}