//WAP in C to find the  LCM (Least Common Multiple) of a number

#include<stdio.h>

int lcm(int a, int b)
{
    //conditional statement
    int max;
    max  = (a > b)? a : b;

    //while loop
    while(1) //while loop is true
    {
        if(max%a == 0 && max%b == 0)
        {
            printf("The LCM of %d and %d is %d",a,b,max);
            break;
        }    
        max++;
    }
    return(max);
}

int main()
{
    int first_number;
    int second_number; 
    int result;

    printf("Enter the first number : ");
    scanf("%d", &first_number);
    printf("Enter the second number : ");
    scanf("%d", &second_number);
    
    lcm(first_number, second_number);

    return 0;

}