#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(10, sizeof(int));

    // Odd number
    int index = 0;
    for (int i = 1; i <= 10; i++)
    {
        if ((i % 2) != 0)
        {
            ptr[index] = i;
            index++;
        }
    }

    for (int i = 0; i < index; i++)
    {
        printf("odd number: %d\n", ptr[i]);
    }

    ptr = realloc(ptr, 12);

    printf("\n*************\n");

    // even number
    int index1 = 0;
    for (int i = 1; i <= 12; i++)
    {
        if ((i % 2) == 0)
        {
            ptr[index1] = i;
            index1++;
        }
    }

    for (int i = 0; i < index1; i++)
    {
        printf("even number: %d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}