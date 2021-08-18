//WAP in Cpp to arrange elements in array

#include<stdio.h>
#include<limits.h>

#define MAX_LENGTH 20


int main()
{
    int arr[MAX_LENGTH],n;
    printf("Enter N : ");
    scanf("%d",&n);
    printf("Enter the elements of array : \n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Original array : \n");
    for(int i = 0; i < n; i++){
        printf("%d\t",arr[i]);
    }

    //sorting of array
    int temp = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted array : \n");
    for(int i = 0; i < n; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}