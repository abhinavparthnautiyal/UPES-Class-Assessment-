/*Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string.*/
#include<stdio.h>
#include<string.h>
void REVERSE(char str[])
{
    char rev[1000];
    int len=strlen(str);
    for(int i=0; i <= len/2; i++)
    {
        rev[i]=str[len-i-1];
        rev[len-i-1]=str[i];
    }
    printf("The reversed string as follows: %s", rev);
}
void main()
{   char string[1000];
    printf("Enter the string:\n");
    gets(string);
    REVERSE(string);

}