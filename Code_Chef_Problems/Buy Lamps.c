#include <stdio.h>

int main(void)
{
    int T;    // Denoting the number of tast case
    int X, Y; // A red lamp costs and a blue lamp costs
    int N;    // Chef is buy exactly lamps from this shop
    int K;    // Chef needs to pay the least of the lamps bought are red

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d %d", &N, &K, &X, &Y);

        if (X > Y)
        {
            printf("%d\n", (N - K) * Y + K * X);
        }
        else
        {
            printf("%d\n", (N - K) * X + K * X);
        }
    }

    return 0;
}
