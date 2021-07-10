//WAP in C to swap two variable without using a third variable.

#include<stdio.h>
int main()
{
    int first_number; // suppose a = 10
    int second_number; // suppose b = 20

    printf("Enter the first number : ");
    scanf("%d",&first_number);

    printf("Enter the second number : ");
    scanf("%d",&second_number);

    //swapping logic

    first_number = first_number + second_number; // a = 30 (10+20)
    second_number = first_number - second_number; // b = 10 (20-10)
    first_number = first_number - second_number; // a = 20 (30-10)

    printf("\nFirst Number after swaping : %d\n",first_number);
    printf("\nSecond Number after swaping : %d\n",second_number);

    return 0;
}
