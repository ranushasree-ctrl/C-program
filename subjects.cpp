#include <stdio.h>
int main()
{
    float m1,m2,m3,m4,m5,avg;
	printf("enter five subjects marks");
	scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
	avg=m1+m2+m3+m4+m5/5.0;
	printf("the average of five subjects is %f",avg);
}
    
