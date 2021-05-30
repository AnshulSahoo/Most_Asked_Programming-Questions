//WAP in C to find the sum of numbers within a range 

#include<stdio.h>
int main()
{
    int start, end;
    int i;
    int sum =0;

    printf("Enter the starting number : ");
    scanf("%d", &start);
    printf("Enter the ending number : ");
    scanf("%d", &end);

    for(i=start; i<=end; i++)
    {
        sum = sum + i;
    }

    printf("The sum of the number between %d and %d is %d",start,end,sum);

    return 0;
}