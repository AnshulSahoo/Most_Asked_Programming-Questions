//Program to check if the given character is a vowel or consonant using switch case

#include<stdio.h>
#include<ctype.h>

void main()
{
    char ch;

    printf("Enter the Character : ");
    scanf("%c", &ch);

    if(isalpha(ch))
    {
        switch (ch)
        {
        case 'A':
            printf("It is a Vowel");
            break;
        case 'E':
            printf("It is a Vowel");
            break;
        case 'I':
            printf("It is a Vowel");
            break;
        case 'O':
            printf("It is a Vowel");
            break;
        case 'U':
            printf("It is a Vowel");
            break;
        case 'a':
            printf("It is a Vowel");
            break;
        case 'e':
            printf("It is a Vowel");
            break;
        case 'i':
            printf("It is a Vowel");
            break;
        case 'o':
            printf("It is a Vowel");
            break;
        case 'u':
            printf("It is a Vowel");
            break;
        default:
            printf("It is a consonant");
            break;
        }
    }

    else
    {
        printf("Entered character is not a alpphabet");
    }
    
}