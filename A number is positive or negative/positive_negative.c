//WAP in C to check whether a number is positive or negative 

#include<stdio.h>
int main()

{
    int number;

    printf("Enter the Number : ");\
    scanf("%d", &number);

    if(number > 0)
    {
        printf("Entered Number is Positive : ");
    }
    else
    {
        printf("Entered Number is Negative : ");
    }
    return 0;
}