#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // The length of candy
    int K; // The length of candy during each bite exactly

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &K);
        int count = 0;
        int temp = N;

        if (N == 0)
        {
            printf("0\n");
        }
        for (int j = 1; j <= N; j++)
        {
            temp = temp - K;
            count++;
            if (j == N)
            {
                printf("%d\n", count);
            }
            if (temp < 0)
            {
                printf("-1\n");
                break;
            }
        }
    }
    return 0;
}
