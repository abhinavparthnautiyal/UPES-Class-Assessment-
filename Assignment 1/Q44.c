/*Write a program to reverse the string without using the strrev() function.*/
#include <stdio.h>
#include <string.h>
void main() 
{
    char str[100], reversed[100];
    int length, i, j;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    length = strlen(str);
    if(str[length - 1] == '\n') 
    length--;
    for(int i=0; i < length ;i++)
    {
        reversed[i]=str[length-i-1];
    }
    reversed[length]='\0';
    printf("Reversed string: %s\n", reversed);
}
