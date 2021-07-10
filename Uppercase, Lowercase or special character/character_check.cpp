/*C program Check whether a given character is 
upper case, lower case, number or special character*/

#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"Enter the Character : ";
    cin>>ch;

    if(ch>=65 && ch<=90)
    {
        cout<<"Entered Charcter is a Upper case Alphabet";
    }

    else if(ch>=97 && ch<=122)
    {
        cout<<"Entered Charcter is a Lower case Alphabet";
    }

    else if(ch>=48 && ch<=57)
    {
        cout<<"Entered Charcter is a Digit";
    }

    else
    {
        cout<<"Enterd character is a special charcter";
    }
    return 0;
}