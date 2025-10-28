/*4.	The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade.*/
#include<stdio.h>
void main()
{
    int population = 100000;
    int years = 10;
    float growth_rate = 0.10;

    printf("Year\tPopulation\n");
    for(int year=1; year<=years; year++) 
    {
        population += population * growth_rate;
        printf("%d\t%d\n", year, population);
    }
}
