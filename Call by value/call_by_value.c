//WAP in C to represent call by value

#include<stdio.h>

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    
    return(printf("Value of A and B after swapping : %d and %d",x,y));
}

int main()
{
    int a,b;

    printf("Enter the value of A :");
    scanf("%d",&a);
    printf("Enter the value of B :");
    scanf("%d",&b);

    printf("Value of A and B before swapping : %d and %d\n",a,b);
    swap(a, b);

    return 0;
    
}