//WAP in C to insert elemnt in an array

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

    printf("\nInsert element : ");
    scanf("%d",&p);

    printf("\nElement position : ");
    scanf("%d",&k);

    //insert element algorithm
    for(int i=n-1;i>=k;i--)
    {
        arr[i+1] = arr[i];
    }

    n = n + 1;
    arr[k] = p;

    printf("New array after element inserted : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;

}