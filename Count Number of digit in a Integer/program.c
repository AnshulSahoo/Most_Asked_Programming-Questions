//WAP in C to find the sum of the digits of a Integer

#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    int rem;

    printf("Enter a Integer : ");
    scanf("%d", &n);

    while(n!=0)
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }

    printf("The sum of digits of number is %d",sum);
    return 0;
}