#include <stdio.h>

int main()
{
    int Number;

    printf("Enter number: ");
    scanf("%d", &Number);

    if (Number % 2 == 0)
    {
        printf("Even!\n");
    }
    else
    {
        printf("Odd!\n");
    }

    return 0;
}