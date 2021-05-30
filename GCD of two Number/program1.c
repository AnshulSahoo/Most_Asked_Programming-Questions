//WAP on C to print GCD of a number using function

#include<stdio.h>

int gcd_function(int a, int b)
{
    int gcd;
    int i;
    for(i=1; i<=a && i<=b ;i++)
    {
        if((a%i == 0) && (b%i == 0))
        {
            gcd=i;
        }
        
    }

    return(printf("The GCD of %d and %d is %d",a,b,gcd));
}

int main()
{

    int first_number;
    int second_number; 

    printf("Enter the first number : ");
    scanf("%d", &first_number);
    printf("Enter the second number : ");
    scanf("%d", &second_number);

    gcd_function(first_number,second_number);

    return 0;
}