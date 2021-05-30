//WAP in C to check whether a number is positive or negative using fuction

#include<stdio.h>
//function declaration
int positive_negative(number)
{
    if(number > 0)
    {
        return(printf("Entered Number is Positive"));
    }
    else
    {
        return(printf("Entered Number is Negative"));
    }
}

int main()

{
    int number;

    printf("Enter the Number : ");\
    scanf("%d", &number);
    //function call
    positive_negative(number);
    return 0;
}