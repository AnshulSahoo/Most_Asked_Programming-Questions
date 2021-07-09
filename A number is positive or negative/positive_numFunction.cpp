#include<iostream>
using namespace std;

void positive_fun(int n)
{
    if(n>=0)
        cout<<"Entered number is positive"<<endl;
    else
        cout<<"Entered number is negative"<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    positive_fun(n);
    return 0;
}