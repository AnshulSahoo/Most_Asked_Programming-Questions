//WAP in C to show array traversal

#include<stdio.h>
#define MAX_SIZE 50
int main()
{
    int arr[MAX_SIZE];
    int n;

    printf("Enter the size of an array : ");
    scanf("%d",&n);

    printf("Enter the elements of array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the elements of array : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}