#include <stdio.h>
int main()
{
    int num,rev=0,rem;
    printf("enter any integer numbers");
    scanf("%d",&num);
    while(num!=0)
{
	  rem=num%10;
	  rev=rev*10+rem;
	  num=num/10;
}

    if('temp'==rev)
    printf("\nthe given number is palindrome %d",'temp');
    else
    printf("\n the given number is not palindrome %d",'temp');
}
