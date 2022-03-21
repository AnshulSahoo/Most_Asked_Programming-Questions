//WAP in C to check if a number is prime or not

#include<stdio.h>

int main(){
      int n, d;

      printf("Enter N : ");
      scanf("%d",&n);

      int divided = 1;
      d = 2;
      while(d<n){
            if(n%d==0){
                  divided = 0;
            }
            d++;
      }

      if(divided == 1){
            printf("Entered Number is Prime");
      }
      else{
            printf("Entered Number is Not Prime");
      }

      return 0;

      
}