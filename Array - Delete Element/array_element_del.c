//WAP in C to delete element in an array

#include<stdio.h>
#define MAX_SIZE 50

int main()
{
    int arr[MAX_SIZE];
    int n, p, k;

    printf("Enter the size of an array : ");
    scanf("%d",&n);

    printf("Enter the elements of array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter elements in array : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\nDelete element : ");
    scanf("%d",&p);

    printf("\nElement position : ");
    scanf("%d",&k);

    //delete element algorithm
    for(int i=k;i<=n-2;i++)
    {
        arr[i] = arr[i+1];
    }

    n = n - 1;

    printf("New array after element deleted : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;

}