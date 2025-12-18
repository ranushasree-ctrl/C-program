#include <stdio.h>
int main()
{
    char ch;
    int num;
    float flt;
    printf("enter any character");
    scanf("%c",&ch);
    printf("enter any integer number");
    scanf("%d",&num);
    printf("enter any real number");
    scanf("%f",&flt);
    
    printf("character is:%c\ninteger number is:%d\nreal number is:%f", ch,num,flt);
}
