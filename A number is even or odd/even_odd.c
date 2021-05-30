//WAP in C to check whether a number is even or odd

#include<stdio.h>
int main()
{
    int number;

    printf("Enter the number :");
    scanf("%d", &number);

    //if else condition
    if(number%2==0)
    {
        printf("Entered Number is Even");
    }
    else
    {
        printf("Entered Number is odd");
    }
    return 0;
}