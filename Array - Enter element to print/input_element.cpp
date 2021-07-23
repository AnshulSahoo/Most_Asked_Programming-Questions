//WAP in C to print input elemnts in array
#include<iostream>
using namespace std;
#define MAX_SIZE 10
int main()
{
    int A[MAX_SIZE];

    cout<<"Enter the elements of array : "<<endl;
    for(int i=0;i<MAX_SIZE;i++)
    {
        cin>>A[i];
    }

    cout<<"The elements of array are : "<<endl;
    for(int i=0;i<MAX_SIZE;i++)
    {
        cout<<A[i]<<'\t';
    }
    return 0;
}