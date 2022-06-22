/*
Write a C program to input a character from user and check whether the given character is alphabet or not using if else. How to check whether a character is alphabet or not in C programming. Logic to check if a character is alphabet or not in C program.

Example
Input
Input character: a
Output

'a' is alphabet
*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Input character: ");
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("'%c' is vowel\n",ch);
    }
    else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is consonants\n",ch);
    }
    else
    {
        printf("'%c' is Special character\n",ch);
    }
    
}