//WAP in C to print the sum of N natural Numbers.

#include<stdio.h>
int main()
{
    int i;
    int n;
    int sum=0;

    printf("Enter the no of Natural Number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }

    printf("The sum of n natural Number = %d",sum);
    return 0;
}