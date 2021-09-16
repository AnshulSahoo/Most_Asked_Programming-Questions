/*Using Function: C program to find factorial of a number.*/
 
#include <stdio.h>
 
/* function : factorial, to find factorial of a given number*/
 
long int factorial(int n)
{
    int i;
    long int fact=1;
 
    if(n==1) return fact;
 
    for(i=n;i>=1;i--)
        fact= fact * i;
 
    return fact;
}
  
int main()
{
    int num;
 
    printf("Enter an integer number :");
    scanf("%d",&num);
 
    printf("\nFactorial of %d is = %ld",num,factorial(num));
     
    return 0;
}