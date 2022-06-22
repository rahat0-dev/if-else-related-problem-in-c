/*
Write a C program to check leap year using if else. How to check whether a given year is leap year or not in C programming. C Program to input year from user and check whether the given year is leap year or not using ladder if else. Logic to check leap year in C programming.

Example
Input
Input year: 2004
Output

2004 is leap year.
*/

#include <stdio.h>

int main()
{
    int year;
    printf("Input year: ");
    scanf("%d",&year);

    if(year % 4 == 0 && year % 400 == 0 || year % 100 != 0)
    {
        printf("%d is leap year.\n",year);
    }
    else
    {
        printf("%d is not leap year.\n",year);
    }
}