//WAP in C to find even number in an array

#include<stdio.h>

int main()
{
      int n, arr[50], i;

      printf("Enter N : ");
      scanf("%d",&n);

      printf("Enter the elements : \n");
      for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
      }


      printf("List of even numbers : ");    
      for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                  printf("\n%d",arr[i]);
            }
      }


}