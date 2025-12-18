/*write a c program to read and display a character a string and a sentence*/
#include <stdio.h>
int main()
{
    char ch;
    char str[30];
    char sen[40];
	scanf("%c",&ch);
	scanf("%s\n",str);
	scanf("%[^\n]s",sen);
	printf("character is %c\n",ch);
	printf("string is %s\n",str);
	printf("sentence is %s",sen);
}
