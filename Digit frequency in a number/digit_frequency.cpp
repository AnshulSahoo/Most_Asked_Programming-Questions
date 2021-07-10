//WAP in C to find the frequency of a digit in a number

#include<iostream>
using namespace std;

int main()
{
    int n,num,rem,freq=0;

    cout<<"Enter the number : ";
    cin>>n;

    cout<<"Enter the number you want to check for : ";
    cin>>num;

    while(n!=0)
    {
        rem = n%10;
        if(num == rem)
        {
            freq++;
        }
        n = n/10;
    }

    cout<<"The frequency of "<<num<<" is "<<freq;

    return 0;
}