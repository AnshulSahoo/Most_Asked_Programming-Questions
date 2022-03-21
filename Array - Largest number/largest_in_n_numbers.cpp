//WAP in C++ to find the largest among n numbers

#include<iostream>
using namespace std;

int main()
{
      int n, arr[50], i;

      cout<<"Enter N : ";
      cin>>n;

      for(int i=0;i<n;i++){
            cout<<"Element = ";
            cin>>arr[i];
      }

      int large = arr[0];
      for(int i=0;i<n;i++){
            if(arr[i]>large){
                  large = arr[i];
            }
      }

      cout<<"The largest number = "<<large<<endl;

      return 0;
}