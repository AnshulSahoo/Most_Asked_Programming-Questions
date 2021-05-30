/*C program Check whether a given character is 
upper case, lower case, number or special character*/

#include<stdio.h>

void main()
{
    char ch;

    printf("Enter the Character : ");
    scanf("%c", &ch);

    if(ch>=65 && ch<=90)
    {
        printf("Entered Charcter is a Upper case Alphabet");
    }

    else if(ch>=97 && ch<=122)
    {
        printf("Entered Charcter is a Lower case Alphabet");
    }

    else if(ch>=48 && ch<=57)
    {
        printf("Entered Charcter is a Number");
    }

    else
    {
        printf("Enterd character is a special charcter");
    }
    
}