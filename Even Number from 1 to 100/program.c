//WAP in C to find print even natural numbers from 1 to 100

#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter N : ");
    scanf("%d",&n);

    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
        
    }
    return 0;
}