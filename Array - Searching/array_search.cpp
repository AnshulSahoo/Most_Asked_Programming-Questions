//WAP in Cpp to search a element in ana array

#include<iostream>
using namespace std;

#define MAX_SIZE 20
int main()
{
    int arr[MAX_SIZE];
    int n,key,i;
    cout<<"Enter the size of an array : ";
    cin>>n;
    cout<<"Enter the elements of array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element you want to search : "<<endl;
    cin>>key;

    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            cout<<"The element "<<key<<" is in "<<(i+1)<<" position";
        }
    }
    return 0;
}