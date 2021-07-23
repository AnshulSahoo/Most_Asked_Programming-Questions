//WAP in C to print input and output in array
#include<iostream>
using namespace std;

int main()
{
    int A[10] = {2,4,6,8,10};

    cout<<"Enter the elements of array : "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<A[i]<<'\t';
    }
    return 0;
}