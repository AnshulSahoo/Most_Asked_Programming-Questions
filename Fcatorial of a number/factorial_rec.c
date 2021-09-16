//WAP in C to print the factorial of a number using recursion

#include<stdio.h>

long int fact_num(int n)
{
    if(n==1)
        return 1;
    return n*fact_num(n-1);
}

int main()
{
    int n;

    printf("Enter number : ");
    scanf("%d",&n);

    printf("The factorial of a number : %d",fact_num(n));

    return 0;
}