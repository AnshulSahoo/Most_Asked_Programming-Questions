/*C program Check whether a given character is 
upper case, lower case, number or special character*/

#include<stdio.h>
#include<ctype.h>

void main()
{
    char ch;

    printf("Enter the Character : ");
    scanf("%c", &ch);

    if(isupper(ch))
    {
        printf("Entered Charcter is a Upper case Alphabet");
    }

    else if(islower(ch))
    {
        printf("Entered Charcter is a Lower case Alphabet");
    }

    else if(isdigit(ch))
    {
        printf("Entered Charcter is a Number");
    }

    else
    {
        printf("Enterd character is a special charcter");
    }
    
}