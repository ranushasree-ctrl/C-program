//write a c program to find duplicate elements in array
#include <stdio.h>
int main()
{
	int a[100], i,n, j;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter the the elements:\n");
	for(i = 0; i < n; i++)
	sacnf("%d", &a[i]);
	printf("duplicate elements are:\n");
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j< n; j++)
		{
			if(a[i] == a[j])
			{
				printf("%d",a[i]);
				break;
			}
		}
	}
	return 0;
}

