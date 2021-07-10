//WAP on C++ to print GCD of a number using function

#include<iostream>
using namespace std;

int gcd_function(int a, int b)
{
    int gcd;
    int i;
    for(i=1; i<=a && i<=b ;i++)
    {
        if((a%i == 0) && (b%i == 0))
        {
            gcd=i;
        }
        
    }
    return(gcd);
}

int main()
{

    int first_number;
    int second_number; 
    int gcd;
    cout<<"Enter the first number : ";
    cin>>first_number;
    cout<<"Enter the second number : ";
    cin>>second_number;

    gcd_function(first_number,second_number);
    cout<<"The GCD of "<<first_number<<" and "<<second_number<<" is "<<gcd;
    return 0;
}