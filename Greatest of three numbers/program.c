//WAP in C to find the greatest between three numbers

#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Enter the first Number : ");
    scanf("%d",&a);
    printf("Enter the second Number : ");
    scanf("%d",&b);
    printf("Enter the third Number : ");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("%d is greater",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is greater",b);
    }
    else
    {
        printf("%d is greater",c);
    }
    return 0;
}