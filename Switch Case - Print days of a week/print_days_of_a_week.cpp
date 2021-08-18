//Write a C program to print day of week name using switch case.
#include<iostream>
using namespace std;

int main()
{
    int day;
    cout<<"Enter Day Number: ";
    cin>>day;
    switch (day)
    {
        case 1:
        cout<<"MONDAY";
        break;

        case 2:
        cout<<"TUESDAY";
        break;

        case 3:
        cout<<"WEDNESDAY";
        break;

        case 4:
        cout<<"THURSDAY";
        break;

        case 5:
        cout<<"FRIDAY";;
        break;
        
        case 6:
        cout<<"SATURDAY";
        break;

        case 7:
        cout<<"SUNDAY";
        break;

        default:
        cout<<"INVALID ENTRY";;
        break;
    }
    return 0;
}