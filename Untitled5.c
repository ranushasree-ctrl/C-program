#include <stdio.h>
int main()
{
    int i,j,rows,value;
    printf("enter number of rows");
    scanf("%d",&rows);
    for(i=0; i<rows;i++)
    {
	   for(j=0; j<=rows-i;j++)
	   printf("  ");
	     value=1;
	     for(j=0; j<=i; j++)
    {
	     printf("   *",value);
	     value =value*(i-j)/(j+1);
	}
	printf("\n");
    }
}
