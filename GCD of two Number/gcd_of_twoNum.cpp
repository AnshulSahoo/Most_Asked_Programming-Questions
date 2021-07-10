//WAP on C++ to print GCD of a number.

#include<iostream>
using namespace std;

int main()
{

    int a;
    int b; 
    int gcd,i;

    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;

    for(i=1; i<=a && i<=b ;i++)
    {
        if((a%i == 0) && (b%i == 0))
        {
            gcd=i;
        }
        
    }

    cout<<"The GCD of "<<a<<" and "<<b<<" is "<<gcd;

    return 0;
}