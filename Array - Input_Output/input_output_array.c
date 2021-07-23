//WAP in C to print input and output in array
#include<stdio.h>
int main()
{
    int A[10] = {2,4,6,8,10};

    printf("Enter the elements of array : \n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}