#include <stdio.h>

int main(void)
{
    int X; // day

    scanf("%d", &X);

    if (X == 25) // If day is equal to 25
    {
        printf("CHRISTMAS\n"); // If true, 'CHRISTMAS '
    }
    else
    {
        printf("ORDINARY\n"); // If false, 'ORDINARY'
    }
}
