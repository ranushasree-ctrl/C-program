#include <stdio.h>
int main()
{
	int a[10],i,target,found=0,n;
	printf("\n enter the size of the array");
	scanf("%d",&n);
	
	printf("\nenter the elements");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    
	    printf("\nenter the  target elements");
	    scanf("%d",&target);
	    
	    for(i=0;i<n;i++)
	    {
	    	if(a[i]==target)
	    	{
	    		found=1;
	    		break;
			}
		}
		if(found==1)
		   printf("element is found");
		else
		   printf("element is not found");
		
}