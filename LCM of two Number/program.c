//WAP in C to find the  LCM (Least Common Multiple) of a number

#include<stdio.h>
int main()
{
    int first_number;
    int second_number; 
    int max_number;

    printf("Enter the first number : ");
    scanf("%d", &first_number);
    printf("Enter the second number : ");
    scanf("%d", &second_number);

    //conditional statement
    max_number  = (first_number > second_number)? first_number : second_number;

    //while loop
    while(1) //while loop is true
    {
        if(max_number%first_number == 0 && max_number%second_number==0)
        {
            printf("The LCM od %d and %d is %d",first_number,second_number,max_number);
            break;
        }    
        max_number++;
    }
    return 0;

}