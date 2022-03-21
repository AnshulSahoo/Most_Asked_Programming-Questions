//WAP in C to 0ind prime number in a series

#include<stdio.h>
int main()
{
      int n, arr[50], i;

      printf("Enter N : ");
      scanf("%d",&n);

      printf("Enter array elements\n");
      for(int i=0;i<n;i++){
            printf("Element [%d] = ",i);
            scanf("%d",&arr[i]);
      }

      int flag = 1;

      for(int i=0;i<n;i++){
            for(int j=2;j<arr[i];j++){
                  if(arr[i]%j==0){
                  flag = 0;
                  }      
            }

            if(flag == 1){
                  printf("%d is Prime\n", arr[i]);
            }
      }

      return 0;
}