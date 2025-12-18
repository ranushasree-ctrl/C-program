#include <stdio.h>

int fact(int x);   // Function declaration

int main()
{
    int n;
    printf("Enter any positive integer: ");
    scanf("%d", &n);

    printf("\nFactorial is %d", fact(n));
    return 0;
}

int fact(int x)
{
    if (x == 1 || x == 0)
        return 1;
    else
        return x * fact(x - 1);
}

