//C program to find asci value of a character

/*
Program to find the ASCII value of a character is discussed here. 
Given a character as input, the ASCII value of the character is displayed as output.
A character variable holds the ASCII value (an integer number between 0 and 127) 
rather than that character itself. That value is known as the ASCII value.

For example, consider the given character as input.

Input: S
Output: 83

Input: s
Output: 115
*/

#include<stdio.h>

void main()
{
    char ch;

    printf("Enter the Character : ");
    scanf("%c", &ch);

    printf("The ASCII of the %c is : %d",ch,ch);
    
}