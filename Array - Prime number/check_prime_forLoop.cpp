//WAP in Cpp to check if a number is prime or not

#include<iostream>
using namespace std;

int main(){
      int n, d;

      cout<<"Enter N : ";
      cin>>n;

      int divided = 1;
      for(int d = 2;d<n;d++)
      {
            if(n%d==0){
                  divided = 0;
            }
      }

      if(divided == 1){
            cout<<"Entered Number is Prime"<<endl;
      }
      else{
            cout<<"Entered Number is Not Prime"<<endl;
      }

      return 0;
      
}