//WAP in C to find prime numbers in an array

#include<iostream>
using namespace std;

int main()
{
      int n, i, j, arr[50];

      cout<<"Enter N : ";
      cin>>n;

      cout<<"Enter array eleemnts : "<<endl;
      for(int i=0;i<n;i++){
            cout<<"Element ["<<i<<"] = ";
            cin>>arr[i];
      }

      cout<<"List of prime numbers : "<<endl;
      int flag = 1;
      for(int i=0;i<n;i++){
            for(int j=2;j<arr[i];j++){
                  if(arr[i]%j==0){
                        flag = 0;
                        break;
                  }
            }
            if(flag == 1){
                  cout<<arr[i]<<" is Prime"<<endl;
            }
            else{
                  cout<<arr[i]<<" is not prime"<<endl;
            }

      }

      return 0;
}