/*Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes this function to generate prime numbers between the given ranges.*/
 #include<stdio.h>
 int ISPRIME(int num)
 {
    for(int i=2; i <= num/2; i++ )\
    {
        if(num%i==0)
        return 0;
    }
    return 1;
 }
 void main()
 {
    int n;
    printf("Enter the number you  want to check for prime:\n");
    scanf("%d", &n);
    int prime=ISPRIME(n);
    if(prime==1)
    printf("The given number is prime");
    else
    printf("The given number is not prime");
 }