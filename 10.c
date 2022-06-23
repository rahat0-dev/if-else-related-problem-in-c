/*
Write a C program to input character from user and check whether character is uppercase or lowercase alphabet using if else. How to check uppercase and lowercase using if else in C programming. Logic to check uppercase and lowercase alphabets in C program.

Example
Input
Input character: C
Output

'C' is uppercase alphabet
*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Input charcter: ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase alphabet\n",ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase alphabet\n",ch);
    }
    else
    {
        printf("'%c' is a alphabet\n",ch);
    }
    
}