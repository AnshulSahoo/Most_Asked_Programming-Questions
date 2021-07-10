//WAP in Cpp to find the area of a circle using function
#include<iostream>
using namespace std;
#define PI 3.14

int circle_area_function(int radius)
{
    return (PI * radius * radius);

}

int main()
{
    int radius;
    float area_circle;

    cout<<"Enter the radius of the circle  : ";
    cin>>radius;

    area_circle = circle_area_function(radius);

    cout<<"The area of the circle is "<<area_circle;
    return 0;

}