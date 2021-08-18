//WAP in Cpp to find the sum of the digits of a number

#include<iostream>
using namespace std;

int main()
{
    int n,rem;
    int count = 0;
    cout<<"Enter the number : ";
    cin>>n;

    //sum of the digits of a number
    while(n>0)
    {
        n = n/10;
        count++;
    }

    cout<<"The no. of the digits of a number = "<<count;
    return 0;
}