#include <stdio.h>
int main()
{
    int T;
    int N, X;
    int average_lifetime;
    int sum_of_lifetimes;
    int remaining_bulb_lifetime;

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &X);

        int lifetimes[N];

        for (int i = 0; i < N - 1; i++)
        {
            scanf("%d", &lifetimes[i]);
        }
        sum_of_lifetimes = 0;

        for (int i = 0; i < N - 1; i++)
        {
            sum_of_lifetimes += lifetimes[i];
        }
        remaining_bulb_lifetime = (N * X) - sum_of_lifetimes;

        if (remaining_bulb_lifetime >= X)
        {
            printf("%d\n", remaining_bulb_lifetime);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}