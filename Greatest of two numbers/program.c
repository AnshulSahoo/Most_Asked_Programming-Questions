//WAP in C to find the greatest between two numbers

#include<stdio.h>
int main()
{
    int a;
    int b;

    printf("Enter the first Number : ");
    scanf("%d",&a);
    printf("Enter the second Number : ");
    scanf("%d",&b);

    if(a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else
    {
        printf("%d is greater than %d",b,a);
    }
    return 0;
}