#include<stdio.h>
int main()
{
    int binary_num, decimal_num=0,last_digit;
    int power=1;

    printf("Binary number  : ");
    scanf("%d",&binary_num);

    while(binary_num!=0)
    {
        last_digit = binary_num%10;
        decimal_num = decimal_num + (last_digit*power);
        binary_num = binary_num/10;
        power = power*2;
    }

    printf("Decimal Number : %d",decimal_num);
    return 0;
}