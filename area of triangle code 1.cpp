#include <stdio.h>
int main()
{

    float area;
    float base;
    float height;
    printf("please enter the base:");
    scanf("%f", &base);
    printf("please enter the height:");
    scanf("%f", &height);
    area=(1.0/2.0)*base*height;
    printf("the area of triangle is: %f" ,area);
}
