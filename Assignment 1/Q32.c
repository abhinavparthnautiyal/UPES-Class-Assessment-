/*Write the program to copy string1 to string3 and concatenate string1 Cstring2 and also print total length of str1 after concatenation .*/
#include <stdio.h>
#include <string.h>
void main()
{
    char string1[100],string2[100],string3[100];
    printf("Enter string1: ");
    gets(string1);
    printf("Enter string2: ");
    gets(string2);
    strcpy(string3,string1);
    strcat(string1,string2);
    printf("string3 (copy of string1) = %s\n",string3);
    printf("string1 after concatenation = %s\n",string1);
    printf("Total length of string1 after concatenation = %d\n",strlen(string1));
}
