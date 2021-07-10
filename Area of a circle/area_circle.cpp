//WAP in Cpp to fid the area of a circle

#include<iostream>
using namespace std;
#define PI 3.14
int main()
{
    int radius;
    float area_circle;

    cout<<"Enter the radius of the circle  :";
    cin>>radius;

    area_circle = PI * radius * radius;

    cout<<"The area of the circle is "<<area_circle;
    return 0;
}