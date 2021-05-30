//C program to check whether the character is an alphabet or not(without using isalpha)

#include<stdio.h>

void main()
{
    char ch;

    printf("Enter the Character : ");
    scanf("%c", &ch);

    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        printf("Entered Charcter is a Alphabet");
    }

    else
    {
        printf("Enterd character is not a Alphabet");
    }
    
}