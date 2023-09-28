#include <stdio.h>

int main(void)
{
    int T;
    int k;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &k);

        int steps = 0;
        for (int j = 1; j <= k; j++)
        {
            if (j % 2 == 0)
            {
                steps--;
            }
            else
            {
                steps += 3;
            }
        }

        printf("%d\n", steps);
    }
    return 0;
}
