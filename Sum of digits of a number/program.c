//WAP in C to print the sum of digits of a number

#include<stdio.h>
int main()
{
    int i;
    int n;
    int sum=0;

    printf("Enter the Number : ");
    scanf("%d",&n);

    //sum of the digits of a number
    while(n>0)
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }

    printf("The sum of the digits of a number =  %d",sum);
    return 0;
}
