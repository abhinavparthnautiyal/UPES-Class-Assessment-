/*Write a C program using ternary operator, the user should input the length and breadth
of a rectangle, one has to find out which rectangle has the highest perimeter. The
minimum number of rectangles should be three.*/
#include<stdio.h>
void main()
{
  int length1, breadth1, length2, breadth2, length3, breadth3;
    int perimeter1, perimeter2, perimeter3;
    printf("Enter length and breadth of first rectangle: ");
    scanf("%d %d", &length1, &breadth1);
    printf("Enter length and breadth of second rectangle: ");
    scanf("%d %d", &length2, &breadth2);
    printf("Enter length and breadth of third rectangle: ");
    scanf("%d %d", &length3, &breadth3);
    perimeter1 = 2 * (length1 + breadth1);
    perimeter2 = 2 * (length2 + breadth2);
    perimeter3 = 2 * (length3 + breadth3);
    int max_perimeter = (perimeter1>perimeter2)?((perimeter1>perimeter3)?perimeter1:perimeter3):(perimeter2>perimeter3)?perimeter2:perimeter3;
    printf("The highest perimeter among the three rectangles is: %d\n", max_perimeter);
}