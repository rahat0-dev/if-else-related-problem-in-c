/*
Write a C program to check whether a number is divisible by 5 and 11 or not using if else. How to check divisibility of any number in C programming. C program to enter any number and check whether it is divisible by 5 and 11 or not. Logic to check divisibility of a number in C program

Example

Input

Input number: 55

Output

Number is divisible by 5 and 11
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Input number: ");
    scanf("%d",&n);

    if(n % 5 == 0 && n % 11 == 0)
    {
        printf("Number %d is divisible by 5 and 11\n",n);
    }
    else
    {
         printf("Number %d is not divisible by 5 and 11\n",n);
    }
}



