//WAP in C++ to find the greatest between two numbers

#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout<<"Enter the first Number : ";
    cin>>a;
    cout<<"Enter the second Number : ";
    cin>>b;

    if(a>b)
    {
        cout<<a<<" is greater than "<<b;
    }
    else
    {
        cout<<b<<" is greater than "<<a;
    }
    return 0;
}