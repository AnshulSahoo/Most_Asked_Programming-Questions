//WAP in C to calculate the frequency of a digit in number of digits

#include<stdio.h>
int main()
{
    int num,digit,rem,count = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Enter digit you want to search  : ");
    scanf("%d", &digit);

    while(num!=0)
    {
        rem  = num%10;
        if(digit == rem )
        {
            count++;
        }
        num = num/10;

    }

    printf("The frequency of %d is %d ",digit,count);
    return 0;
}