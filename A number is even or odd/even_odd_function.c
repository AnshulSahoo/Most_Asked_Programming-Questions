//WAP in C to check whether a number is even or oddn using function

#include<stdio.h>

int even_odd_function(number)
{
    if(number%2==0)
    {
        return(printf("Entered Number is Even"));
    }
    else
    {
        return(printf("Entered Number is odd"));
    }
}

int main()
{
    int number;

    printf("Enter the number :");
    scanf("%d", &number);

    //function call
    even_odd_function(number);
    return 0;
}