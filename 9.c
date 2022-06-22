/*
Write a C program to input a character from user and check whether given character is alphabet, digit or special character using if else. How to check if a character is alphabet, digits or any other special character using if else in C programming. Logic to check alphabet, digit or special character in C programming.

Example
Input
Input any character: 3
Output

3 is digit
*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Input bany character: ");

    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("%c is alphabet\n",ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is digit\n",ch);
    }
    else
    {
        printf("%c is special character\n",ch);
    }
    
}