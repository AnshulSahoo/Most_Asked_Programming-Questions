#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
        cout<<"Entered character is a Alphabet "<<endl;
    else
        cout<<"Entered character is not a Alphabet "<<endl;
    return 0;
}