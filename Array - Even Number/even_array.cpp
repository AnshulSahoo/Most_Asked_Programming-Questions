//WAP in Cpp to find even number in an array

#include<iostream>
using namespace std;

int main()
{
      int n, arr[50], i;

      cout<<"Enter N : ";
      cin>>n;

      cout<<"Enter the elements : "<<endl;
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }


      cout<<"List of even numbers : "<<endl;    
      for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                  cout<<arr[i]<<endl;
            }
      }

      return 0;
}