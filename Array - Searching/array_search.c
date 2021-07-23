//WAP in C to search a element in ana array

#include<stdio.h>
#define MAX_SIZE 20
int main()
{
    int arr[MAX_SIZE];
    int n,key,i;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    printf("Enter the elements of array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element you want to search : \n");
    scanf("%d",&key);

    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            printf("The element %d is in %d position",key,i+1);
        }
    }
    return 0;
}