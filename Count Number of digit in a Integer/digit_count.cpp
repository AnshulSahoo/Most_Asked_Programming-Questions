//WAP in C++ to count the number od digits
#include<iostream>
using namespace std;

int main()
{
    int n, last_digit,count=0;
    cout<<"Enter the number : ";
    cin>>n; //287

    while(n!=0)
    {
        last_digit = n%10; 
        count = count + 1;
        n = n/10;
    }

    cout<<"The number of digits is "<<count;

    return 0;
}
