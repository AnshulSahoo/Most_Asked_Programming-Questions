//Linear search in Cpp

#include<stdio.h>
#include<limits.h>


void arrSearch(int arr[], int n, int key){
    int i;
    for(int i = 1; i < n; i++ ){
        if(key==arr[i]){
            printf("The element %d is in position %d",arr[i],i);
        }
    }

}

int main(){
    int arr[10],n,key;

    printf("Enter N : ");
    scanf("%d",&n);
    printf("Enter the elements of array : \n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the key : ");
    scanf("%d",&key);
    arrSearch(arr,n,key);
    return 0;
}