#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,real,img;
    float r1,r2,realp,imgp;
    printf("enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
     printf("\n the roots are real");
     r1=(-b + sqrt(d))/2*a;
     r2=(-b - sqrt(d))/2*a;
     printf("r1=%f and r2=%f",r1,r2);
	}
	 else
	 if(d<0)
	 {
	  printf("\n the roots are imaginary");
	  realp =(-b/2*a);
	  imgp = sqrt(d)/2*a;
	  printf("\n r1=%f+%fi and \n r2=%f-%fi",realp,imgp,real,imgp);
	  	
	 }
	 else
	 {
	 	printf("the roots are equal");
	 }
}
    
