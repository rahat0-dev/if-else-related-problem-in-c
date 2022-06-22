/*
Write a C program to find maximum between three numbers using ladder if else or nested if. How to find maximum or minimum between three numbers using if else in C programming. Logic to find maximum or minimum between three numbers in C program.

Example

Input

Input num1: 10
Input num2: 20
Input num3: 15

Output

Maximum is: 20

*/

#include <stdio.h>

int main()
{
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    int maximum;

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            maximum = num1;
        }
        else
        {
            maximum = num3;
        }
    }
    else
    {
        if(num2 > num3)
        {
            maximum = num2;
        }
        else
        {
            maximum = num3;
        }
    }
    printf("Maximum = %d\n",maximum);
}