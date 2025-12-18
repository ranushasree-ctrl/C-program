#include <stdio.h>
int main()
{
    int a,b;
    printf("please enter any two integer numbers");
    scanf("%d%d",&a,&b);
    printf("\n bitwise operation of %d & %d is %d",a,b,a&b);
      printf("\n bitwise operation of %d ! %d is %d",a,b,a,!b);
      printf("\n bitwise operation of %d ^ %d is %d",a,b,a^b);
        printf("\n bitwise operation of %d << %d is %d",a,b,a<<b);
          printf("\n bitwise operation of %d >> %d is %d",a,b,a>>b);
}
