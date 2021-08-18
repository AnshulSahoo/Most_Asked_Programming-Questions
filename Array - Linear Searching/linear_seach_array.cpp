//Linear search in Cpp

#include<iostream>
#include<climits>
using namespace std;

void arrSearch(int arr[], int n, int key){
    int i;
    for(int i = 1; i < n; i++ ){
        if(key==arr[i]){
            cout<<"The element "<<arr[i]<<" is in position "<<i;
        }
    }

}

int main(){
    int arr[10],n,key;

    cout<<"Enter N : ";
    cin>>n;
    cout<<"Enter the elements of array : "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the key : ";
    cin>>key;
    arrSearch(arr,n,key);
    return 0;
}