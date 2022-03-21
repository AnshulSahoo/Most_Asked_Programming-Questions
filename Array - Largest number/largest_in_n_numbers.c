//WAP in C to find the largest amoung n numbers

#include<stdio.h>
int main()
{
      int n, i, arr[50];

      printf("Enter N : ");
      scanf("%d",&n);

      for(int i=0;i<n;i++){
            printf("\nElement [%d] = ",i);
            scanf("%d",&arr[i]);
      }
      int large = arr[0];
      for(int i=0;i<n;i++){
            if(arr[i]>large){
                  large = arr[i];
            }   
      }

      printf("\nLargest number = %d",large);

      return 0;
}