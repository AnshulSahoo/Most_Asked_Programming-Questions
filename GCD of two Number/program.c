//WAP on C to print GCD of a number.

#include<stdio.h>
int main()
{

    int a;
    int b; 
    int gcd,i;

    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    for(i=1; i<=a && i<=b ;i++)
    {
        if((a%i == 0) && (b%i == 0))
        {
            gcd=i;
        }
        
    }

    printf("The GCD of %d and %d is %d",a,b,gcd);

    return 0;
}