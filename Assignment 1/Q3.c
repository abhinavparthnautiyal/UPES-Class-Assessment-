/*Write a program that prompts the user to enter their name and age.*/
#include <stdio.h>
void main()
{
    char name[50];
    int age;
    printf("Enter your name: ");
    gets(name); 
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\nYour name is %s and you are %d years old.\n", name, age);
}
