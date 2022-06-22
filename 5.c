/*
Write a C program to check whether a number is even or odd using if else. How to check whether a number is even or odd using if else in C program. C Program to input a number from user and check whether the given number is even or odd. Logic to check even and odd number using if...else in C programming.

Example
Input
Input number: 10
Output

10 is even number
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Input number: ");
    scanf("%d",&n);

    if(n % 2 == 0)
    {
        printf("%d is even number\n",n);
    }
    else
    {
        printf("%d is odd number\n",n);
    }
}