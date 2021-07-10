//WAP in Cpp to swap two variable with using a third variable.

#include<iostream>
using namespace std;

int main()
{
    int first_number;
    int second_number;
    int temp_number;

    cout<<"Enter the first number : ";
    cin>>first_number;

    cout<<"Enter the second number : ";
    cin>>second_number;

    //swapping logic

    temp_number = first_number;
    first_number = second_number;
    second_number = temp_number;

    cout<<"\nFirst Number after swaping : "<<first_number<<endl;
    cout<<"Second Number after swaping : "<<second_number<<endl;

    return 0;
}