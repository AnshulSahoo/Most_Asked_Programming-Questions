//WAP in C to find the greatest between three numbers

#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout<<"Enter the first Number : ";
    cin>>a;
    cout<<"Enter the second Number : ";
    cin>>b;
    cout<<"Enter the third Number : ";
    cin>>c;

    if(a>b && a>c)
    {
        cout<<a<<" is greatest "<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<b<<" is greatest "<<endl;
    }
    else
    {
        cout<<c<<" is greatest "<<endl;
    }
    return 0;
}