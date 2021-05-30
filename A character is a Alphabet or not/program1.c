//C program to check whether the character is an alphabet or not(with using isalpha)

#include<stdio.h>
#include<ctype.h>

void main()
{
    char ch;

    printf("Enter the Character : ");
    scanf("%c", &ch);

    if(isalpha(ch))
    {
        printf("Entered Charcter is a Alphabet");
    }

    else
    {
        printf("Enterd character is not a Alphabet");
    }
    
}