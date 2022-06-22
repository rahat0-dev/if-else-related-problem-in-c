/*
Write a C program to check positive, negative or zero using simple if or if else. C program to input any number from user and check whether the given number is positive, negative or zero. Logic to check negative, positive or zero in C programming.

Example

Input

Input number: 23

Output

23 is positive
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Input number: ");
    scanf("%d",&n);
    if(n >= 0)
    {
        printf("%d is positive\n",n);
    }
    else
    {
        printf("%d is negativ\n",n);
    }
}

