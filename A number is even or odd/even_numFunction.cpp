#include<iostream>
using namespace std;

void even_fun(int n)
{
    if(n%2==0)
        cout<<"Entered number is even"<<endl;
    else
        cout<<"Entered number is odd"<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    even_fun(n);
    return 0;
}