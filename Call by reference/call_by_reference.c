//WAP in C to represent Call by reference

#include<stdio.h>

int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a,b;

    printf("Enter the value of A :");
    scanf("%d",&a);
    printf("Enter the value of B :");
    scanf("%d",&b);

    printf("Value of A and B before swapping : %d and %d\n",a,b);
    swap(&a, &b);
    printf("Value of A and B after swapping : %d and %d",a,b);

    return 0;
    
}