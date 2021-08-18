//WAP in Cpp to find the sum of the digits of a number

#include<iostream>
using namespace std;

int main()
{
    int n,rem;
    int sum = 0;
    cout<<"Enter the number : ";
    cin>>n;

    //sum of the digits of a number
    while(n>0)
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }

    cout<<"The sum of the digits of a number = "<<sum;
    return 0;
}