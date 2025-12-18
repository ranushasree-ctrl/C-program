#include <stdio.h>
int main()
{
    int mat[3][3],i,j,ltm=1;
    printf("\nenter the elements of matrix");
    for(i=0;i<3;i++)
    {
	   for(j=0;j<3;j++)
	   {
	       scanf("%d",&mat[i][j]);
	   }
	   
    }
    for(i=0;i<3;i++)
    {
	    for(j=0;j<3;j++)
	    {
		 if(i<j && mat[i][j]!=0 || i>=j && mat[i][j]==0)
		 {
		    ltm=0;
		    break;
		 }
        }
    }
    if(ltm==1)
      printf("the given matrix is a lower triangular matrix");
    else
      printf("the given matrix is  not a lower triangular matrix");
}
