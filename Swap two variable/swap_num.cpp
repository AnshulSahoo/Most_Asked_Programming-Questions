//WAP in Cpp to swap two variable without using a third variable.

#include<iostream>
using namespace std;

int main()
{
    int first_number; // suppose a = 10
    int second_number; // suppose b = 20

    cout<<"Enter the first number : ";
    cin>>first_number;

    cout<<"Enter the second number : ";
    cin>>second_number;

    //swapping logic

    first_number = first_number + second_number; // a = 30 (10+20)
    second_number = first_number - second_number; // b = 10 (20-10)
    first_number = first_number - second_number; // a = 20 (30-10)

    cout<<"\nFirst Number after swaping : "<<first_number<<endl;
    cout<<"Second Number after swaping : "<<second_number<<endl;
    return 0;
}
