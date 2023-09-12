#include <stdio.h>

int main()
{
    FILE *odd_number;

    odd_number = fopen("D:\\C_Programming\\c\\File\\Odd_number.txt", "w");

    int N;

    printf("Enetr number : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(odd_number, "%d\n", i);
        }
    }
    fclose(odd_number);

    return 0;
}