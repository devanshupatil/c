#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // The number of items
    int X; // Chef bought and the cost per item
    int Total;
    int count;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        Total = 0;
        count = 0;
        scanf("%d %d", &N, &X);

        Total = N * X;

        while (1)
        {
            Total = Total % 10;
            count++;

            if (Total == 0)
            {
                break;
            }
        }

        if (count == 5)
        {
            printf("YES\n");
        }
        else if (Total == 0)
        {
            printf("NO\n");
        }
    }
    return 0;
}
