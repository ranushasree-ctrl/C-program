 /*write a c program to print the following pattern*/
 #include <stdio.h>
 int main()
 {
    int rows,i,j;
	char ch;
    printf("enter number of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
    	ch='A';
	   	for(j=1;j<=i;j++)
   		{
       		printf("  %c",ch);
       		ch++;
   		}
       printf("\n");
   	}
}
