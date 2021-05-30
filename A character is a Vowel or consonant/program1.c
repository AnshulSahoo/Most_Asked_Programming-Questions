//Program to check if the given character is a vowel or consonant using if-else

#include<stdio.h>
#include<ctype.h>

void main()
{
    char ch;

    printf("Enter the Character : ");
    scanf("%c", &ch);

    if(isalpha(ch))
    {
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' 
        || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            printf("Entered character is a Vowel");
        }
        else
        {
            printf("Entered character is a Consonant");
        }
    }

    else{
        printf("Enterd character is not a Alphabet");
    }
    
}