//WAP in C++ to sort array using bubble sorting method

#include<iostream>
using namespace std;
#define MAX_SIZE 50

int main()
{
    int arr[MAX_SIZE];
    int n;

    cout<<"Enter the size of an array : ";
    cin>>n;

    cout<<"Enter the elements of array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //bubble sort algorithm
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"The elemnts after sorting : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<'\t';
    }

    return 0;

}