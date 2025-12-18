
#include <stdio.h>
int main()
{
    float fah,cel;
    printf("please enter the value of fahrenheit");
    scanf("%f",&fah);
    cel=(fah-32)*(5.0/9.0);
    printf("celsius is %f\n,cel");
    printf("\nenter the value of celsius");
    scanf("%f,&cel");
    fah=cel*(9.0/5.0)+32.0;
    printf("fahrenheit is %f\n",fah);
}







