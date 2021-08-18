//WAP in Cpp to arrange elements in array

#include<iostream>
#include<climits>
using namespace std;
#define MAX_LENGTH 20


int main()
{
    int arr[MAX_LENGTH],n;
    cout<<"Enter N : ";
    cin>>n;
    cout<<"Enter the elements of array : "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Original array : "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<"\t";
    }

    //sorting of array
    int temp = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<endl<<"Sorted array : "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<"\t";
    }
    

}