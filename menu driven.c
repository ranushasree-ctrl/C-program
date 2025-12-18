#include <stdio.h>
int main()
{
	char s1[20],s2[20],s3[20];
	int choice,val=1;
	printf("\n1. length of the string");
    printf("\n2. copy from the the string");
   	printf("\n3. concatenation of the two  strings");
   	printf("\n4. comparision of the two  strings");
   	printf("\n5. reverse of the string");
   	printf("\n6. converting into lowercase");
   	printf("\n7.converting into uppercase ");
   	printf("\nenter your choice");
   	scanf("%d",choice);
   	switch(choice)
   	{
   		case 1:
   			{
   				printf("\nenter any string");
   				scanf("%[^\n]",s1);
   				printf("length of the given string is %d",strlen(s1));
   				break;
		    }
		case 2:
				{
   				printf("\nenter any string");
   				scanf("%[^\n]",s1);
   				printf("length of the given string is %d",strlen(s1));
   				break;
		    }
		case 3:
				{
   				printf("\nenter any string1");
   				scanf("%[^\n]",s1);
   				printf("\nenter the string2");
   				scanf("%[^\n]",s2);
   				printf(" after concstring is %d",strlen(s1));
   				break;
		        }
		case4:        
            
	}
}
