//WAP in Cpp to check if a number is prime or not

#include<iostream>
using namespace std;

int main(){
      int n, d;

      cout<<"Enter N : ";
      cin>>n;

      int divided = 1;
      d = 2;
      while(d<n){
            if(n%d==0){
                  divided = 0;
            }
            d++;
      }

      if(divided == 1){
            cout<<"Entered Number is Prime"<<endl;
      }
      else{
            cout<<"Entered Number is Not Prime"<<endl;
      }

      return 0;
      
}