#include <stdio.h>

void swap(int x, int y);

int main()
{
    int a, b;

    printf("\nEnter any two integer numbers: ");
    scanf("%d%d", &a, &b);

    printf("\nBefore swapping, a and b values are: %d  %d", a, b);

    swap(a, b);  // call by value

    printf("\nAfter swapping, a and b values are: %d  %d", a, b);

    return 0;
}

void swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("\nInside swap function after swapping: %d  %d", x, y);
}

