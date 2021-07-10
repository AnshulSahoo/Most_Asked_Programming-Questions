//WAP in C++ to find print even natural numbers from 1 to 100

#include<iostream>
using namespace std;

int main()
{
    int n,i;

    cout<<"Enter N : ";
    cin>>n;
    cout<<"The list of even numbers"<<endl;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<i<<"\t";
        } 
    }
    return 0;
}