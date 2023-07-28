#include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    int X = 3;
    int Y = 5;

    swap(X, Y);

    printf("x =%d \n", X);
    printf("y = %d \n", Y);

    _swap(&X, &Y);

    printf("X = %d \n", X);
    printf("Y = %d \n", Y);
}

void swap(int a, int b)
{
    int t;

    t = a;
    a = b;
    b = t;

    printf("swap = %d \n", a);

    printf("swap = %d \n", b);
}

void _swap(int *a, int *b)
{
    int t = *a;

    *a = *b;
    *b = t;

    printf("pointer = %d \n", *a);
    printf("pointer = %d \n", *b);
}