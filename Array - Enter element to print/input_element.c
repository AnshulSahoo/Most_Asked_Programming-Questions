//WAP in C to print input elemnts in array
#include<stdio.h>
#define MAX_SIZE 10
int main()
{
    int A[MAX_SIZE];

    printf("Enter the elements of array : \n");
    for(int i=0;i<MAX_SIZE;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("The elements of array are : \n");
    for(int i=0;i<MAX_SIZE;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}