#include<iostream>
using namespace std;

int main()
{
    int binary_num, decimal_num=0,last_digit;
    int power=1;

    cout<<"Binary number  : ";
    cin>>binary_num;

    while(binary_num!=0)
    {
        last_digit = binary_num%10;
        decimal_num = decimal_num + (last_digit*power);
        binary_num = binary_num/10;
        power = power*2;
    }

    cout<<"Decimal Number : "<<decimal_num;
    return 0;
}