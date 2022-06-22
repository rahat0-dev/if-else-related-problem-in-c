/*
Write a C program to find maximum between two numbers using if else. C program to input two numbers from user and find maximum between two numbers using if else. How to find maximum or minimum between two numbers using if else in C programming.

Example

Input

Input num1: 10
Input num2: 20

Output

Maximum = 20

*/

#include <stdio.h>

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    
    int maximum;

    if(num1 > num2)
    {
        maximum = num1;
    }
    else
    {
        maximum = num2;
    }
    printf("Maximum = %d\n",maximum);
}