#include <stdio.h>

int main(void)
{
    int N; // Number

    scanf("%d", &N);

    int x = N;
    int count = 1;

    if (N < 10)
    {
        printf("%d\n", count);
    }
    else
    {
        while (x != 0)
        {
            x = x / 10;
            if (x != 0)
            {
                count++;
            }
        }
        if (count > 3)
        {
            printf("More than 3 digits\n");
        }
        else
        {
            printf("%d\n", count);
        }
    }
    return 0;
}
