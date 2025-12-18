#include <stdio.h>
int main()
{
	int i,num,count=0;
	printf("enter any integer number");
	scanf("%d",&num);
	for(i=1; i<=num;i++)
	{
	  if(num%i==0)
	    count++;
	    
	}
	  if(count==2)
	  
	  printf("\n the given number  %d is prime",num);
	  else
	  printf("\n the given number  %d is not prime",num);
	  
}
