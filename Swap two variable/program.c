//WAP in C to swap two variable with using a third variable.

#include<stdio.h>
int main()
{
    int first_number;
    int second_number;
    int temp_number;

    printf("Enter the first number : ");
    scanf("%d",&first_number);

    printf("Enter the second number : ");
    scanf("%d",&second_number);

    //swapping logic

    temp_number = first_number;
    first_number = second_number;
    second_number = temp_number;

    printf("\nFirst Number after swaping : %d\n",first_number);
    printf("\nSecond Number after swaping : %d\n",second_number);

    return 0;
}