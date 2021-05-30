#include<stdio.h>
int main()
{
    int n;
    int count = 0;

    printf("Enter a Integer : ");
    scanf("%d", &n);

    while(n!=0)
    {
        n = n/10;
        count++;
    }

    printf("The Number of digits is %d",count);
    return 0;
}