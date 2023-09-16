#include <stdio.h>
#include <stdlib.h>

// Q. Allocate memory for 5 numbers. Then dynamically increase it to 8 number

int main()
{
    int *ptr;

    ptr = (int *)calloc(5, sizeof(int));

    printf("Enetr number(5): ");

    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &ptr[j]);
    }

    ptr = realloc(ptr, 8);

    printf("Enetr number(8): ");

    for (int j = 0; j < 8; j++)
    {
        scanf("%d", &ptr[j]);
    }

    for (int i = 0; i < 8; i++)
        printf("number %d is %d\n", i, ptr[i]);

    return 0;
}