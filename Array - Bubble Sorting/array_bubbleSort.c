//WAP in C to sort array using bubble sorting method

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

    //bubble sort algorithm
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The elemnts after sorting : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;

}