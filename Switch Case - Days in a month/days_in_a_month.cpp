//Write a C program print total number of days in a month using switch case.
#include<iostream>
using namespace std;
int main()
{
    int month;
    cout<<"Enter Month Number: ";
    cin>>month;
    switch (month)
    {
        case 1:
        cout<<"JANUARY-31 DAYS"<<endl;
        break;

        case 2:
        cout<<"FEBRUARY-28/29 DAYS"<<endl;
        break;

        case 3:
        cout<<"MARCH-31 DAYS"<<endl;
        break;

        case 4:
        cout<<"APRIL-30 DAYS"<<endl;
        break;

        case 5:
        cout<<"MAY-31 DAYS"<<endl;
        break;
        
        case 6:
        cout<<"JUNE-30 DAYS"<<endl;
        break;

        case 7:
        cout<<"JULY-31 DAYS"<<endl;
        break;

        case 8:
        cout<<"AUGUST-31 DAYS"<<endl;
        break;

        case 9:
        cout<<"SEPTEMBER-30 DAYS"<<endl;
        break;

        case 10:
        cout<<"OCTOBER-31 DAYS"<<endl;
        break;

        case 11:
        cout<<"NOVEMBER-30 DAYS"<<endl;
        break;

        case 12:
        cout<<"DECEMBER-31 DAYS"<<endl;
        break;

        default:
        cout<<"INVALID ENTRY"<<endl;
        break;
    }
    return 0;
}