//WAP in Cpp to find the sum of numbers within a range 

#include<iostream>
using namespace std;

int main()
{
    int start, end;
    int i;
    int sum =0;

    cout<<"Enter the starting number : ";
    cin>>start;
    cout<<"Enter the ending number : ";
    cin>>end;

    for(i=start; i<=end; i++)
    {
        sum = sum + i;
    }

    cout<<"The sum of the number between "<<start<<" and "<<end<< " is "<<sum;

    return 0;
}