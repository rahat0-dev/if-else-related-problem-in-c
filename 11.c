/*
Write a C program to enter month number between(1-12) and print number of days in month using if else. How to print number of days in a given month using if else in C programming. Logic to find number of days in a month in C program.

Example
Input
Enter month number: 1
Output

It contains 31 days.
*/

#include <stdio.h>

int main()
{
    int month;
    printf("Enter month number: ");
    scanf("%d",&month);

    if(month == 1)
    {
        printf("It contains 31 days.\n");
    }
    else if (month == 2)
    {
        printf("It contains 28 days.\n");
    }
     else if (month == 3)
    {
        printf("It contains 31 days.\n");
    }
     else if (month == 4)
    {
        printf("It contains 29 days.\n");
    }
     else if (month == 5)
    {
        printf("It contains 31 days.\n");
    }
     else if (month == 6)
    {
        printf("It contains 30 days.\n");
    }
     else if (month == 7)
    {
        printf("It contains 31 days.\n");
    }
     else if (month == 8)
    {
        printf("It contains 30 days.\n");
    }
    else if (month == 9)
    {
        printf("It contains 29 days.\n");
    }
    else if (month == 10)
    {
        printf("It contains 31 days.\n");
    }
    else if (month == 11)
    {
        printf("It contains 30 days.\n");
    }
    else if (month == 12)
    {
        printf("It contains 29 days.\n");
    }
    else
    {
         printf("Invalid input! Please enter month number between (1-12).");
    }
    
}