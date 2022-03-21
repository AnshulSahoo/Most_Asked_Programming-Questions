//WAP in C to check if a number is prime or not

#include<stdio.h>

int main(){
      int n, d;

      printf("Enter N : ");
      scanf("%d",&n);

      int divided = 1;
      for(int d = 2;d<n;d++)
      {
            if(n%d==0){
                  divided = 0;
            }
      }

      if(divided == 1){
            printf("Entered Number is Prime");
      }
      else{
            printf("Entered Number is Not Prime");
      }

      return 0;

      
}