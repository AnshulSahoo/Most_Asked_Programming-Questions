//WAP in C to fid the area of a circle using function

#include<stdio.h>
#define PI 3.14

int circle_area_function(int radius)
{
    return (PI * radius * radius);

}

int main()
{
    int radius;
    float area_circle;

    printf("Enter the radius of the circle  :");
    scanf("%d", &radius);

    area_circle = circle_area_function(radius);

    printf("The area of the circle is %.2f",area_circle);
    return 0;

}
