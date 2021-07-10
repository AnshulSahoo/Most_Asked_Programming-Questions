//WAP in Cpp to print the sum of N natural Numbers.

#include<iostream>
using namespace std;

int main()
{
    int i;
    int n;
    int sum=0;

    cout<<"Enter the no of Natural Number : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }

    cout<<"The sum of n natural Number = "<<sum;
    return 0;
}